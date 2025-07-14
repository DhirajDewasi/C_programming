//wap show option like addition substraction multiplication division .Accept choice and perform that operation.
#include<stdio.h>
int main()
{
    int a,b,ch;
    printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division");
    scanf("%d",&ch);
    printf("Enter 2 number:");
    scanf("%d%d",&a,&b);
    switch(ch)
    {
        case 1:printf("Addition is %d:",(a+b));
        break;
         case 2:printf("Substraction is %d:",(a-b));
        break;
         case 3:printf("Multiplication is %d:",(a*b));
        break;
         case 4:printf("Division is %d:",(a/b));
        break;
    }
    return 0;
}