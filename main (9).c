/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int numero;
    int media;
    int somma;
    int cont;
    
    printf ("inserisci numero positivo");
    numero=0;
    somma=0;
    cont=0;
    media=0;
    while (numero>=0) {
        scanf ("%d",&numero);
        somma=somma+numero;
        cont=cont+1;
        media=somma/cont;
    printf ("stampare ogni volta la media di tutti i numeri introdotti %d\n", media);
    }
    
    

    return 0;
}
