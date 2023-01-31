/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float celsius;
    float fahrenheit;
    float kelvin;
    printf ("inserire una temperatura in celsius\n");
    scanf ("%f", &celsius);
  
  
    if (celsius < -273.15) {
    printf ("errore nel calcolatore\n");
    }
    else {
        fahrenheit= (9/5)*celsius + 32;
        kelvin= celsius + 273.15;
        printf ("la temperatura in kelvin e %f \n", kelvin);
        printf ("la temperatura in fahrenheit e %f \n", fahrenheit);
        
    }

   
 
    return 0;
}
