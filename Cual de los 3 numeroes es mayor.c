/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x= 0;
    int y= 0;
    int z= 0;
 
    printf ("En el siguiente programa podras saber de cual de los 3 numero es mayor \n ");
    printf ("---------------------------------------------------------------------- \n ");
    printf ("Escribe el valor de x:\n");
    scanf ("%d", &x);
    printf ("Escribe el valor de y:\n");
    scanf ("%d", &y);
    printf ("Escribe el valor de z:\n");
    scanf ("%d", &z);
    if (x>y)
    {
        if(x>z)
            {
                printf ("x es mayor %d", x);
            }

        else{ 
                printf ("z es mayor %d", z);
            }
    }
    else
    {
        if (y>z){
            
                    printf ("y es mayor: %d", y);
                }
        else {
                printf ("z es mayor: %d", z);
             }
    }
    
 
        
    
    
            
            
    
    
    
    

    

    return 0;
}
