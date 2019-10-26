# include  < stdio.h >
# include  < string.h >
void  main () {
int n;
nome do caractere [ 50 ];
printf ( " DIGITE UMA FRASE TODA EM LETRAS MAISCULAS: " );
gets (nome);
para (n = 0 ; n < strlen (nome); n ++) {
if (nome [n]> = 65 && nome [n] <= 90 ) nome [n] + = 32 ; }
printf ( " sua frase em letras minúsculas: % s " , nome);
}
