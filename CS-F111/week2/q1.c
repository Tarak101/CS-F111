#include <stdio.h> 

int main ()
{ 
    int ascii_value; 

    printf ("ASCII Value: "); 
    scanf ("%d", &ascii_value); 

    char character = ascii_value; 

    printf ("%c\n", character); 
}