/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x[5];
    
    for (int i = 0; i <= 4; i++)
    {
        printf("Escribe el numero \n"); 
        scanf("%d", &x[i]);
        
    }
    
    for (int i =0; i<=4; i++)
    {
        printf("El numero de la posicion %d es %d  \n", i+1, x[i]);
        
    
    }
    
    

    return 0;
}
