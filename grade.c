#include <stdio.h>
int main ()
{
    int roll;
    char name[100];
    float m1,m2,m3;
    float total,avg;
    printf("Enter a Student Details:");
    scanf("%d",&roll);
    printf("Enter Student Name:");
    scanf("%s",&name);
    printf("Enter Marks1:");
    scanf("%f",&m1);
    printf("Enter Marks2: ");
    scanf("%f",&m2);
    printf("Enter Marks3:");
    scanf("%f",&m3);
    total=m1+m2+m3;
    avg=total/3;
    if(avg<=100&&avg>=90)
    printf(" Grade A");
else if(avg<=90&&avg>=80)
printf("Grade B");
else if(avg<=80&&avg>=60)
printf("Grade C");
else if(avg<=60&&avg>=40)
printf("Grade c");
else
printf("FAil ATKT");
return 0;

}