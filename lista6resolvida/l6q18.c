# include  < stdio.h >
void  main () {
int n;
nome do caractere [ 30 ], m, l;

printf ( " digite uma frase: " );
gets (nome);
setbuf (stdin, NULL );
printf ( " escolha uma letra: " );
scanf ( " % c " , & m);
setbuf (stdin, NULL );
printf ( " escolha uma outra letra: " );
scanf ( " % c " , & l);
setbuf (stdin, NULL );

for (n = 0 ; nome [n]! = ' \ 0 ' ; n ++) if (nome [n] == m) nome [n] = l;

printf ( " sua frase ficou assim: % s . " , nome);
}
