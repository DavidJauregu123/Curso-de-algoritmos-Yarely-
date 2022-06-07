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
    
    
    printf("Este programa te dirá si tu año es bisiesto o no \n");
    printf("------------------------------------------------ \n");
    
    printf("Escribe el año que quieres comprobar: \n");
    scanf("%d", &x);
    
    if(x%4 == 0 && x%100 != 0 || x%400 == 0) 
    {
    printf ("Es año bisiesto");
    }
    
    else 
    {
    printf ("No es año bisiesto");   
    } 

    return 0;
}
