/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int anno;
    printf ("inserire un anno");
    scanf ("%d", &anno);
    
    if ((anno%4 == 0 && anno%100!=0) || anno%400==0) {
    printf ("anno bisestile \n");
    }
    else {
    printf ("anno non bisestile\n"); 
    }
    
    
    
  return 0;
}
