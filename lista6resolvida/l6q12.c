# include  < stdio.h >
void  main () {
int n, m = 0 ;
nome do caractere [ 30 ], l;

printf ( " Digite uma frase: " );
gets (nome);
printf ( " escolha uma letra: " );
scanf ( " % c " , & l);

para (n = 0 ; nome [n]! = ' \ 0 ' ; n ++) {
if (nome [n] == ' e ' || nome [n] == ' u ' || nome [n] == ' a ' || nome [n] == ' i ' || nome [n] == ' o ' ) {
nome [n] = l;
m ++;
}
}
printf ( " sua frase tem % d vogais. \ n " , m);
printf ( " % s " , nome);
}
