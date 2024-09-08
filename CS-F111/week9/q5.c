#include<stdio.h>
#include<string.h>
int main(){
        int i;
        char first[50],middle[50],last[50];
        printf("Enter the first name:");
        gets(first);
        printf("Enter the second name:");
        gets(middle);
        printf("Enter the third name:");
        gets(last);
        strcat(first,middle);
        strcat(first,last);
        printf("Your full name is: %s",first);
        return 0;
}