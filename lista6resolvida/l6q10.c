# include  < stdio.h >
int  main () {
nome do caractere [ 20 ];
int n, m;
printf ( " digite um nome: " );
gets (nome);
n = strlen (nome);
printf ( " o nome ao contrário e: " );
para (m = n- 1 ; m> = 0 ; m -) {
    printf ( " % c " , nome [m]);
}
}
