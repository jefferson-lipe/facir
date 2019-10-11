//faça um programa que leia o nome e imprima as 4 primeiras letras do nome
#include <stdio.h>
int main (){
char nome[10];
gets (nome);
 for (int x=0;x<4;x++){
    printf("%c",nome[x]);
 }


return 0;}
