#include <stdio.h>
#include <string.h>

struct SinhVien {
    char name[50];
    int age;
    char phoneNumber[20];
};
int main() {
    struct SinhVien sv;
    strcpy(sv.name, "Le Duc Anh");
    sv.age = 18;
    strcpy(sv.phoneNumber, "0974935754");
    printf("Thong tin sinh vien:\n");
    printf("Name: %s\n", sv.name);
    printf("Age: %d\n", sv.age);
    printf("Phone Number: %s\n", sv.phoneNumber);
    return 0;
}

