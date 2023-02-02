/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void ft_ft(int n1, int n2, int*quoziente, int*resto) {
    *quoziente=n1/n2;
    *resto=n1%n2;
    }

int main()
{   int n1 = 0;
    int n2 = 0;
    int quoziente;
    int resto;
    
    scanf ("%d",&n1);
    printf ("inserire un dividendo%d\n", n1);
    scanf ("%d",&n2);
    printf ("inserire un divisore%d\n", n2);
    
    
    ft_ft (n1,n2,&quoziente,&resto);
    printf ("finale %d\n", quoziente);
    printf ("finale %d\n", resto);
    
    
    
    return 0;
}
