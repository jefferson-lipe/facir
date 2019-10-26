# include  < stdio.h >
# include  < string.h >
void  main () {
nome do caractere [ 20 ], nome1 [ 20 ];
int n, m, l;
printf ( " digite seu nome: " );
gets (nome);
printf ( " digite seu segundo nome: " );
gets (nome1);
n = strlen (nome);
l = strlen (nome1);
printf ( " seu primeiro nome invertido e com os trocados de A por * vai ficar assim: " );
para (m = n- 1 ; m> = 0 ; m -) {
if (nome [m] == ' a ' ) {
nome [m] = ' * ' ;
 printf ( " % c " , nome [m]);
} mais {
 printf ( " % c " , nome [m]);
}
}
printf ( " \ n seu segundo nome invocado e com os trocados de A por * vai ficar assim: " );
para (m = l- 1 ; m> = 0 ; m -) {
if (nome1 [m] == ' a ' ) {
nome1 [m] = ' * ' ;
 printf ( " % c " , nome1 [m]);
} mais {
 printf ( " % c " , nome1 [m]);
}
}
}
