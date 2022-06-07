/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    
    int x = 0;
    
    printf ("Ingresa la calificacion: \n ");
    scanf("%d", &x);
    if (x>=0)
    {
        if (x<=10)
        {
            if (x>6)
            {
                printf ("Aprobado");
            }
            else
            {
                printf ("Reprobado"); 
                
                
            }

        }
        else{
            printf("No es valido");
            
        }
    

    }
    else {
        printf ("No es valido");
        
    }
    
      
        
    
    return 0;
}
