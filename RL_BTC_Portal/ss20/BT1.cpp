#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

struct Book {
    int id;
    char title[100];
    char author[50];
    float price;
    char category[50];
};

void nhapThongTinBook(struct Book *b) {
    printf("Ma sach: ");
    scanf("%d", &b->id);
    getchar();

    printf("Ten sach: ");
    fgets(b->title, sizeof(b->title), stdin);

    printf("Tac gia: ");
    fgets(b->author, sizeof(b->author), stdin);

    printf("Gia tien: ");
    scanf("%f", &b->price);
    getchar();

    printf("The loai: ");
    fgets(b->category, sizeof(b->category), stdin);

    b->title[strcspn(b->title, "\n")] = 0;
    b->author[strcspn(b->author, "\n")] = 0;
    b->category[strcspn(b->category, "\n")] = 0;
}

void hienThiBook(struct Book b) {
    printf("Ma sach: %d\n", b.id);
    printf("Ten sach: %s\n", b.title);
    printf("Tac gia: %s\n", b.author);
    printf("Gia tien: %.2f\n", b.price);
    printf("The loai: %s\n", b.category);
    printf("-------------------------\n");
}

void hienThiDanhSach(struct Book books[], int count) {
    if (count == 0) {
        printf("Danh sach sach rong.\n");
        return;
    }
    for (int i = 0; i < count; i++) {
        hienThiBook(books[i]);
    }
}

void themSachVaoViTri(struct Book books[], int *count) {
    if (*count >= MAX_BOOKS) {
        printf("Danh sach da day, khong the them sach.\n");
        return;
    }

    int pos;
    printf("Nhap vi tri can them (1 den %d): ", *count + 1);
    scanf("%d", &pos);
    getchar();

    if (pos < 1 || pos > *count + 1) {
        printf("Vi tri khong hop le.\n");
        return;
    }

    for (int i = *count; i >= pos; i--) {
        books[i] = books[i - 1];
    }

    printf("Nhap thong tin sach moi:\n");
    nhapThongTinBook(&books[pos - 1]);
    (*count)++;
    printf("Da them sach vao vi tri %d.\n", pos);
}

void xoaSachTheoMa(struct Book books[], int *count) {
    int id;
    printf("Nhap ma sach can xoa: ");
    scanf("%d", &id);
    getchar();

    int found = 0;
    for (int i = 0; i < *count; i++) {
        if (books[i].id == id) {
            found = 1;
            // Dich phan tu phia sau len truoc
            for (int j = i; j < *count - 1; j++) {
                books[j] = books[j + 1];
            }
            (*count)--;
            printf("Da xoa sach co ma %d.\n", id);
            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sach co ma %d.\n", id);
    }
}

void capNhatSachTheoMa(struct Book books[], int count) {
    int id;
    printf("Nhap ma sach can cap nhat: ");
    scanf("%d", &id);
    getchar();

    for (int i = 0; i < count; i++) {
        if (books[i].id == id) {
            printf("Nhap thong tin moi cho sach:\n");
            nhapThongTinBook(&books[i]);
            printf("Da cap nhat sach.\n");
            return;
        }
    }
    printf("Khong tim thay sach co ma %d.\n", id);
}

void sapXepSachTheoGia(struct Book books[], int count, int tang) {
    struct Book temp;
    for (int i = 0; i < count - 1; i++) {
        for (int j = i + 1; j < count; j++) {
            if ((tang && books[i].price > books[j].price) || 
                (!tang && books[i].price < books[j].price)) {
                temp = books[i];
                books[i] = books[j];
                books[j] = temp;
            }
        }
    }
    if (tang)
        printf("Da sap xep sach theo gia tang dan.\n");
    else
        printf("Da sap xep sach theo gia giam dan.\n");
}

void timKiemSachTheoTen(struct Book books[], int count) {
    char ten[100];
    printf("Nhap ten sach can tim: ");
    fgets(ten, sizeof(ten), stdin);
    ten[strcspn(ten, "\n")] = 0;

    int found = 0;
    for (int i = 0; i < count; i++) {
        if (strstr(books[i].title, ten) != NULL) {
            hienThiBook(books[i]);
            found = 1;
        }
    }
    if (!found) {
        printf("Khong tim thay sach.\n");
    }
}

int main() {
    struct Book books[MAX_BOOKS];
    int count = 0;
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Nhap so luong va thong tin sach\n");
        printf("2. Hien thi thong tin sach\n");
        printf("3. Them sach vao vi tri\n");
        printf("4. Xoa sach theo ma sach\n");
        printf("5. Cap nhat thong tin sach theo ma sach\n");
        printf("6. Sap xep sach theo gia (tang/giam)\n");
        printf("7. Tim kiem sach theo ten sach\n");
        printf("0. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &choice);
        getchar(); 

        switch(choice) {
            case 1:
                printf("Nhap so luong sach: ");
                scanf("%d", &count);
                getchar();
                if (count > MAX_BOOKS) {
                    printf("So luong vuot qua gioi han %d. Gan bang %d.\n", MAX_BOOKS, MAX_BOOKS);
                    count = MAX_BOOKS;
                }
                for (int i = 0; i < count; i++) {
                    printf("Nhap thong tin sach thu %d:\n", i + 1);
                    nhapThongTinBook(&books[i]);
                }
                break;
            case 2:
                hienThiDanhSach(books, count);
                break;
            case 3:
                themSachVaoViTri(books, &count);
                break;
            case 4:
                xoaSachTheoMa(books, &count);
                break;
            case 5:
                capNhatSachTheoMa(books, count);
                break;
            case 6:
                {
                    int tang;
                    printf("Chon sap xep theo gia (1: tang dan, 0: giam dan): ");
                    scanf("%d", &tang);
                    getchar();
                    sapXepSachTheoGia(books, count, tang);
                }
                break;
            case 7:
                timKiemSachTheoTen(books, count);
                break;
            case 0:
                printf("Tam biet!\n");
                break;
            default:
                printf("Lua chon khong hop le. Vui long chon lai.\n");
        }
    } while(choice != 0);

    return 0;
}

