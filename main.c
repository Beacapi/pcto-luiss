/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

void ft_ft (int*array, int dimensione) 
{
    int t;
    int temp;
    int z;
    
    temp=0;
    t=0;

    while (t<dimensione-1) 
    {   z=t+1;
        while (z<dimensione) 
        {
        if (array[t]>array[z]) 
            {
            temp=array[t];
            array[t]=array[z];
            array[z]=temp;
        }
        z=z+1; //cambia a ogni ciclo
      }
     t=t+1; 
  }
  
}

int main()
{
  int array[]= {2,7,9,4,11,3};
  int dimensione=6;
  int t=0;
  
  ft_ft (array, dimensione);
  while(t<dimensione)
  {
  printf ("%d\n", array[t]);
  t=t+1;
  }
  
  
    return 0;
}
