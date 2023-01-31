/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero1;
    int numero2;
    int numero3;
    printf ("inserire tre numeri");
    scanf ("%d%d%d", &numero1,&numero2,&numero3);
    
  
  if (numero1-numero2==numero2-numero3) {
      printf ("numeri considerati in progressione aritmetica");
  }
  else {
  printf ("numeri non considerati in progressione aritmetica");
  }
  

   
 
    return 0;
}
