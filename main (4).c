/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void ft_ft (int*nbr, int*x, int y)
{
    *nbr=42;
    *x=10;
    y=102;
    printf ("stampare il valore effettivo di y nella funzione ft_ft: %d\n",y);
}
int main()
{
    int nbr=1;
    int x=2;
    int y=3;
   
    
    printf ("il valore inziale: %d\n%d\n%d\n",nbr,x,y);
    ft_ft (&nbr,&x,y);
    printf ("il valore effettivo dopo aver richiamato ft_ft: %d\n%d\n%d\n",nbr,x,y);
    
    

    return 0;
}
