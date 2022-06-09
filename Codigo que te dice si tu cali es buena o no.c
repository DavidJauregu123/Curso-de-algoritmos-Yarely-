/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n = 0;
    
    printf("Escribe tu calificacion \n"); 
    scanf("%d", &n);
    
    while (n<0 || n>10) 
    { 
        printf("Este valor no es valido:\n"); 
        printf("Vuelve a escribir la calificacion: \n");
        scanf("%d", &n);
    }
    printf("Calificacion valida %d \n", n); 
    
    return 0;
}
