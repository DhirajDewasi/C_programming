#include <stdio.h>
int main ()
{
    int a,b,c;
    printf("Enter  THree number :");
    scanf("%d%d%d",&a,&b,&c);
    //logic and way for these program
 //if(a>=b&&a>c)
// printf("MAx is %d",a);
 //if(b>a&&b>c)
 //printf("MAx  is %d",b);
//else
//printf("MAx  is %d",b);

//if(a>b)
//b=a;
//if(c>b)
//b=c;
//printf("Max is %d",b);
//b=(a>b)?a:b;
// b=(c>b)?c:b;
// printf("Max is %d",b); 

(a>b)?(a>c)? a:c:(b>c)?b:c
printf("Max is %.2f",fmax(a,fmax(b,c)));
return 0;
}