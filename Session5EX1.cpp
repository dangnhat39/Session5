#include <stdio.h>

int main() {

    int givenNumber = 99; 
    int userInput;

    printf("Nh?p vào m?t s? nguyên cho ð?n khi kh?p v?i s? cho trý?c.\n");

 
    do {
        printf("Nh?p m?t s?: ");
        scanf("%d", &userInput);

        if (userInput != givenNumber) {
            printf("S? b?n nh?p chýa ðúng. H?y th? l?i!\n");
        }
    } while (userInput != givenNumber);

   
    printf("Chúc m?ng! B?n ð? nh?p ðúng s? %d.\n", givenNumber);

    return 0;
}

