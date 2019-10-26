# include  < stdio.h >
void  main () {
nome do caractere [ 30 ];
int n;
 printf ( " Digite uma frase com menos dois espaços em branco (espaço): \ n  " );
gets (nome);
 printf ( " Sua frase sem os espacos em branco fica assim: \ n  " );
para (n = 0 ; nome [n]! = ' \ 0 ' ; n ++) {
if (name [n]! = '  ' ) { // espaço em branco
 printf ( " % c " , nome [n]);
    }
  }
}
