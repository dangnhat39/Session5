#include <stdio.h>

int main() {

    int givenNumber = 99; 
    int userInput;

    printf("Nh?p v�o m?t s? nguy�n cho �?n khi kh?p v?i s? cho tr�?c.\n");

 
    do {
        printf("Nh?p m?t s?: ");
        scanf("%d", &userInput);

        if (userInput != givenNumber) {
            printf("S? b?n nh?p ch�a ��ng. H?y th? l?i!\n");
        }
    } while (userInput != givenNumber);

   
    printf("Ch�c m?ng! B?n �? nh?p ��ng s? %d.\n", givenNumber);

    return 0;
}

