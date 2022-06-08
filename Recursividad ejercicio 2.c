/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float promedio = 0;
    float numero = 0;
    
    
    for (int x=0; x <5; x++) 
    {
        printf("dame una calificacion \n"); 
        scanf ("%f", &numero);
        
        if (numero<7)
        {
            printf("Estas frio chavo \n");
        
        }
        
        else
        {
            printf("felicidades has pasado a manzano \n");
        }
     promedio = numero + promedio;
     
    }
    promedio = promedio /5; 
    printf ("Tu promedio pinche ezequiel es: %.2f \n", promedio); 
    
    if (promedio>=7) {
        printf ("Estas aprobado");
                    }
    else 
    { 
        printf ("Estas mas frio que yo chavo, go to the SAC");
    }
    
    return 0;
    
}
