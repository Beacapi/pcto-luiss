/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int lato1;
    int lato2;
    int lato3;
    printf ("inserire tre lati");
    scanf ("%d%d%d", &lato1,&lato2,&lato3);
    
    if (lato1+lato2 >lato3 && lato2+lato3>lato1 && lato3+lato1>lato2) {
    printf ("lati possono essere le lunghezze dei lati di un triangolo");
    }
    else {
    printf ("lati non possono essere le lungheze dei lati di un triangolo");
    }
    
    
    
    
  return 0;
}
