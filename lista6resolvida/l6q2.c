#include <stdio.h>
                    // crie um programa que calcula o comprimento de uma string (nao use a funçao strlen)
int main(){
    int x;
    char nome [100];
    gets(nome);
    x=0;
    while (nome[x] != '\0'){
    x++;
    }
    printf("A quantidade de caracteres e %d.",x);

    return 0;
}
