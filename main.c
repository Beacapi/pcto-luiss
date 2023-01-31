/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
      printf ("inserisci due numeri");
    int numero1;
    int numero2;
    scanf ("%d", &numero1);
    scanf ("%d", &numero2);
  
    if (numero1 % numero2==0) {
    printf ("numero1 multiplo di numero2");
    }
    else {
    printf ("numero1 non  multiplo di numero2"); }
 
    
    

    return 0;
}
