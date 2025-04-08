#include <stdio.h>


int main() {
    // Movimento da Torre 


    printf("Movimento da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // movimento do bispo 

    printf("\n Movimento do Bispo:\n");
    int j = 0;
    while (j < 2) {
        printf("Cima, Direita\n");
        printf ("cima , esquerda \n");

        j++;
    }

    
    // movimento da rainha 


    printf("\n Movimento da Rainha:\n");
    int k = 0;
    do {
        printf("esquerda \n");
        k++;
    } while (k < 5);

    return 0;
}