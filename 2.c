#include<stdio.h>

#define MAX         4000000

int main() {
   
    int num1=1,num2=2,num3=3,sum=0;

    while (num3<MAX)
    {
        if(num3%2==0)
            sum+=num3;

        num1=num2;
        num2=num3;
        num3=num1+num2;
    }
    printf("%d",sum);
    return 0;
}