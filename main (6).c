/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void ft_ft (char lettera) 
{
    printf ("%c\n", lettera);
    
}

int main()
{   
    char A;
    printf ("inserire una lettera\n");
    scanf ("%c", &A);
    ft_ft(A);
    
    return 0;
}
