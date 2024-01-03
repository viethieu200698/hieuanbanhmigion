#include <stdio.h>
#include <string.h>

#define do_dai 100

void swap(char *s1, char *s2) {
    char temp[do_dai];
    strcpy(temp, s1);
    strcpy(s1, s2);
    strcpy(s2, temp);
}

int main() {
    char strings[5][do_dai];

    //nhap 5 chuoi nguoi dung
    for (int i = 0; i < 5; i++) {
        printf("Nhap chuoi %d: ", i + 1);
        fgets(strings[i], do_dai, stdin);

        
        strings[i][strcspn(strings[i], "\n")] = '\0';
    }

    //sap xem mang thu tu alphabet
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (strcmp(strings[i], strings[j]) > 0) {
                swap(strings[i], strings[j]);
            }
        }
    }

    printf("\nMang sau khi sap xep:\n");
    for (int i = 0; i < 5; i++) {
        printf("%s\n", strings[i]);
    }

    return 0;
}

