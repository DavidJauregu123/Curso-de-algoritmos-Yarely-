/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x = 0;

    
    printf("Escribe la primera calificación: \n");
    scanf("%d", &x);
    
    
    if (x>=0 && x<=10)
    {
        if (x>6 ){
            printf ("Estas aprobado");
                 }
        else{
            printf ("Estas reprobado");
            }
    
        
    }
        
        
    
    
    else 
        printf ("No es una calificacion");

    

    return 0;
}
