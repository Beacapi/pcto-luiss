/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ 
    int prezzo;
    int quantita;
    float totale;
    
    printf ("inserisci quantita da acquistare\n");
    
    prezzo=5;
    quantita=1;
    
    while (quantita>0) {
        scanf ("%d", &quantita);
        if (quantita >30) {
        totale= quantita*prezzo*(1-0.1); }
        
        else if (quantita >50) {
            totale=quantita*prezzo*(1-0.15); }
        
        else  {
            totale=quantita*prezzo; }
        printf ("il totale da pagare è %f", totale);
    }
        
  return 0;      
}
    
    
    
    
    
    
    
    
    
    
    

