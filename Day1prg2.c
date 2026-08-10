//Write a program to input two numbers and displau their sum, difference, product and quotient
#include<stdio.h>
int main()
{
int a,b,sum,diff,prod;
float quot;
printf("Enter the first number :");
scanf("%d",&a);
printf("Enter the second number :");
scanf("%d",&b);
sum=a+b;
diff=a-b;
prod=a*b;
quot=(float)a/b;
printf("The sum of %d and %d is %d \n",a,b,sum);
printf("The difference of %d and %d is %d \n",a,b,diff);
printf("The product of %d and %d is %d \n",a,b,prod);
printf("The quoient of %d and %d is %f \n",a,b,quot);
    return 0;
}