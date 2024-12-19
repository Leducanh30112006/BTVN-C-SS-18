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
    int numOfStudents = 5;
    struct SinhVien newStudent;
    newStudent.id = numOfStudents + 1;
    printf("Nhap thong tin sinh vien moi:\n");
    printf("Nhap ten sinh vien: ");
    fgets(newStudent.name, 50, stdin);
    printf("Nhap tuoi sinh vien: ");
    scanf("%d", &newStudent.age);
    getchar();
    printf("Nhap so dien thoai sinh vien: ");
    fgets(newStudent.phoneNumber, 20, stdin);
    sv[numOfStudents] = newStudent;
    numOfStudents++;
    printf("Thong tin cac sinh vien sau khi them moi:\n");
    for (int i = 0; i < numOfStudents; i++) {
        printf("Sinh vien thu %d:\n", i + 1);
        printf("ID: %d\n", sv[i].id);
        printf("Ten: %s\n", sv[i].name);
        printf("Tuoi: %d\n", sv[i].age);
        printf("So dien thoai: %s\n", sv[i].phoneNumber);
        printf("\n");
    }
    return 0;
}

