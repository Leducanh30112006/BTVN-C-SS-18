#include <stdio.h>
#include <string.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct SinhVien sv[5];
    for (int i = 0; i < 5; i++) {
        printf("Nhap thong tin sinh vien thu %d:\n", i + 1);
        printf("Nhap ten sinh vien: ");
        fgets(sv[i].name, 50, stdin);
        printf("Nhap tuoi sinh vien: ");
        scanf("%d", &sv[i].age);
        getchar();
        printf("Nhap so dien thoai sinh vien: ");
        fgets(sv[i].phoneNumber, 20, stdin);
        printf("\n");
    }
    printf("Thong tin cac sinh vien:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n", sv[i].phoneNumber);
        printf("\n");
    }

    return 0;
}

