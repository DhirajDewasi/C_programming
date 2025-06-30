#include <stdio.h>
int main ()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("%s Number",(n&1)?"Odd":"Even"); //Ternary operator;
    return 0;
}