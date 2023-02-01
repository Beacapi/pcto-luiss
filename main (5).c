/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void fattoriale (int numero) {}

int main ()
    { 
        int N;
        int tot=1;
        
        printf ("prendi un numero \n");
        scanf ("%d", &N);
        
        while (N>=1) {
        tot=tot*N;
        N=N-1;
        }
        printf ("finale %d\n", tot);
    
    
    return 0;
}
