#include <stdio.h>
#include <string.h> 
int main() {
    char str[] = "Hello World"; 
    printf("Chuoi da khai bao: %s\n", str);
    char ch;
    printf("Nhap mot ky tu bat ky: ");
    scanf(" %c", &ch);
    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }
    printf("Ky tu '%c' xuat hien %d lan trong chuoi.\n", ch, count);
    return 0;
}

