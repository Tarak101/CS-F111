#include<stdio.h>
int counter=0;
int count(int num){
        if(num!=0){
                count(num/10);
                counter++;
        }
        return counter;
}

int main()
{
        int num,x;
        printf("Enter the number:");
        scanf("%d",&num);
        x=count(num);
        printf("%d digits",x);
        return 0;
}