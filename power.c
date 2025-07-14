#include<stdio.h>
int main()
{
    int result=1,i,x,y;
    printf("Enter value of number:");
    scanf("%d",&x);
    printf("Enter value of power:");
    scanf("%d",&y);

    i=1;
    while(i<=y)
    {
        result=result*x;
        i++;
    }
    printf("%d^%d=%d",x,y,result);
    return 0;
}