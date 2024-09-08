#include <stdio.h>
void color(char i){
    if (i=='R') printf("Red");
    else if(i=='O') printf("Orange");
    else if(i=='Y') printf("Yellow");
    else if(i=='G') printf("Green");
    else if(i=='B') printf("Blue");
    else if (i=='I') printf("Indigo");
    else if(i=='V') printf("Violet");
    else printf("Color is not present");
}

int main() 
{
    char i;
    printf("Enter the character i:");
    scanf("%c",&i);
    color(i);
    return 0;
}