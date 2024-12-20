#include <stdio.h>
#include <string.h>

struct SinhVien {
    int id;
    char name[50];
    int age;
    char phoneNumber[20];
};

int main() {
    struct SinhVien sv[50] = {
        {1, "Le Duc Anh", 18, "0974935754"},
        {2, "Le Duc B", 17, "0981234567"},
        {3, "Le Duc C", 22, "0976543210"},
        {4, "Le Duc D", 25, "0961237890"},
        {5, "Le Duc E", 24, "0959876543"}
    };
    int idToFind, found = 0;
    printf("Nhap id sinh vien can sua: ");
    scanf("%d", &idToFind);
    getchar();
    for (int i = 0; i < 5; i++) {
        if (sv[i].id == idToFind) {
            found = 1;
            printf("Nhap ten moi cho sinh vien: ");
            fgets(sv[i].name, 50, stdin);
            sv[i].name[strcspn(sv[i].name, "\n")] = '\0';
            printf("Nhap tuoi moi cho sinh vien: ");
            scanf("%d", &sv[i].age);
            getchar();

            break;
        }
    }
    if (!found) {
        printf("Khong tim thay sinh vien co id %d\n", idToFind);
    }
    printf("Thong tin cac sinh vien sau khi chinh sua:\n");
    for (int i = 0; i < 5; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n", sv[i].phoneNumber);
        printf("\n");
    }

    return 0;
}
