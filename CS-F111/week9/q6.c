#include<stdio.h>
#include<string.h>
int main(){
        char A[50],B[50];
        int x;
        printf("Enter the first string please:");
        gets(A);

        printf("Enter the second string please:");
        gets(B);

        x=strcmp(A,B);
        if (x==0){
                printf("The strings are the same");}
        else if(x>0){
                printf("The first string is bigger");}
        else if(x<0){
                printf("The second string is bigger");
        }

return 0;
}