/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void fattoriale(int n) {
   
    int tot=1;
    while (n>=1) {
        tot=tot*n;
        n=n-1;
    }
    printf ("finale %d\n",tot);

}

int main()
{
    int n;

    printf ("prendere un numero \n");
    scanf ("%d", &n);
    fattoriale (n);

    return 0;
}

