#include<stdio.h>
int fac(int factor){
        int i;
        for(i=1;i<=factor;i++){
                if(factor%i==0){
                        printf("%d \t",i);
                                }

                }
        return i;
}

int main(){
        int factor,x;
        printf("Enter the number:");
        scanf("%d",&factor);
        x=fac(factor);
        return 0;
}