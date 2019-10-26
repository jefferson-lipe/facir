# include  < stdio.h >
void  main () {
int x;
typedef  struct chamada {
nome do caractere [ 20 ];
int idade;
} Tchamada;
Tchamada aluno [ 10 ];
int m = 0 , l = 0 ;
float alunos;
for ( int x = 0 ; x < 10 ; x ++) {
printf ( " qual seu primeiro nome? " );
scanf ( " % s " , & aluno [x]. nome );
setbuf (stdin, NULL );
printf ( " qual sua idade? " );
scanf ( " % d " , & aluno [x]. idade );
setbuf (stdin, NULL );
if (aluno [x]. idade < 0 ) quebra ; mais m + = aluno [x]. idade ; l + = 1 ;
}
alunos = m / l;
printf ( " \ n - Alunos mais velhos - \ n " );
para ( int x = 0 , x <l; x ++) {
 if (alunos <aluno [x]. idade ) {
 printf ( " Aluno: % s , Idade: % d \ n " , aluno [x]. nome , aluno [x]. idade );
}
}
 printf ( " \ n - alunos mais novos - \ n " );
para ( int x = 0 , x <l; x ++) {
if (alunos> = aluno [x]. idade ) {
if (aluno [x]. idade > 0 ) printf ( " aluno: % s , Idade: % .d \ n " , aluno [x]. nome , aluno [x]. idade );
}
}
}
