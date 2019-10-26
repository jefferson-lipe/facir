# include  < stdio.h >
void  main () {
int n, m = 0 ;
nome do caractere [ 100 ];
printf ( " digite uma frase: " );
gets (nome);
para (n = 0 ; nome [n]! = ' \ 0 ' ; n ++) {
if (nome [n] == '  ' ) { // espaço em branco
m ++;
}
}
printf ( " sua frase tem % d espacos em branco \ n " , m);
}
