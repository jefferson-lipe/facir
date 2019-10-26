# include  < stdio.h >
# include  < string.h >
void  main () {
int n;
nome do caractere [ 50 ];
printf ( " digite uma frase (sem usar letras maiúsculas): " );
gets (nome);
para (n = 0 ; n < strlen (nome); n ++) {
if (nome [n]> = 97 && nome [n] <= 122 ) nome [n] - = 32 ;
}
printf ( " sua frase em letras masiculas fica assim: % s " , nome);
}
