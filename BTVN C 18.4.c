#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct SinhVien sv[50];
    int numOfStudents = 5;
    for (int i = 0; i < numOfStudents; i++) {
        sv[i].id = i + 1;
        printf("Nhap thong tin sinh vien thu %d:\n", sv[i].id);
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
    for (int i = 0; i < numOfStudents; i++) {
        printf("Sinh vien thu %d:\n", sv[i].id);
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n", sv[i].phoneNumber);
        printf("\n");
    }
    return 0;
}

