#include <stdio.h>
#include <string.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct SinhVien sv;
    printf("Nhap ten sinh vien: ");
    fgets(sv.name, 50, stdin);
    sv.name[strcspn(sv.name, "\n")] = '\0';
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &sv.age);
    getchar();
    printf("Nhap so dien thoai sinh vien: ");
    fgets(sv.phoneNumber, 20, stdin);
    printf("\nThong tin sinh vien:\n");
    printf("Ten: %s\n", sv.name);
    printf("Tuoi: %d\n", sv.age);
    printf("So dien thoai: %s\n", sv.phoneNumber);

    return 0;
}

