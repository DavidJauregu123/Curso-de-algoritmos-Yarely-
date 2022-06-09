/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x = 0;
    int c = 0;
    
    do
    {
        printf("Escribe un numero \n");
        scanf("%d", &x);
        if (x%2 == 0)
        { 
            printf("par \n");
        }
        else {
                printf ("impar \n"); 
            
        }
        
        printf ("Si desea continuar presione 1 \n"); 
        scanf ("%d", &c); 
        
    }
        while (c==1); 
            printf("ha decidido salir"); 
        

    return 0;
}
