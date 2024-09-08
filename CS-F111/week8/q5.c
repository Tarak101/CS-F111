#include<stdio.h>
int sum=0;
int count(int num){
        if(num!=0){
                sum=((num%10)+count(num/10));
        }
        return sum;
}

int main()
{
        int num,x;
        printf("Enter the number:");
        scanf("%d",&num);
        x=count(num);
        printf("%d is the sum",x);
        return 0;
}