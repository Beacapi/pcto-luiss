/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
int numero;
int div;
int conta;
div=1;     // div= contatore che indica i numeri da considerare
conta=0;  // conta= quantità di divisori
	printf("inserisci il numero");
        scanf("%d", &numero);
    

	while(conta<3 && div<=numero/2)
	{
	   if(numero%div==0) {
			conta=conta+1;	}
		div=div+1;
	}
	if (conta==1) {
	   printf("il numero e' primo\n "); }
	else {
	   printf("il numero non e' primo\n "); }
	   
}