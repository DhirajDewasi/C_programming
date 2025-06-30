#include <stdio.h>
int main ()
{
    int n;
    printf("Enter a Number:");
    scanf("%d",&n);
    printf("%s Number",(n>0)?"positive":"negative");
    return 0;
}