#include <stdio.h> 

int main ()
{ 
    int height; 

    printf ("Height: "); 
    scanf ("%d", &height); 

    for (int i = 1; i < height + 1; i++ )
    { 
        for (int j = 0; j < i ; j++)
        { 
            printf("%d", i); 
        }
        printf ("\n"); 
    }
}