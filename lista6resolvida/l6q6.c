# include <stdio.h>
void main () {
int idade;
nome do caractere [50], sexo;
printf ("qual seu nome?");
gets (nome);
setbuf (stdin, NULL);
printf ("qual sua idade?");
scanf ("% d", & idade);
setbuf (stdin, NULL);
printf ("qual seu sexo? \ n caso feminino digite m caso": ");
scanf ("% c", & sexo);
setbuf (stdin, NULL);

if (sexo == 'f' && idade <25) {
    printf ("% s aceita", nome);
} mais {
    printf ("não aceita");
    }
