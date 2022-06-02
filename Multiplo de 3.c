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
    int r= 0;
    printf("Hola, este programa te dirá si el numero que escribas es multipo de 3 o no \n");
    printf("Escribe tu numero:\n");
    scanf("%d",&x);
    if (x%3==0){
        r= x*10;
            printf("El resultado es multiplo de 3, asi que se va a multiplicar por 10: %d",r);
    
        }
    else {r= x*3;
        printf("El resultado no es multiplo de 3, asi que se va a multiplicar por 3: %d", r);
        
    }
    
    
    return 0;
}
