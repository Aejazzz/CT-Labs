#include <stdio.h>

int addnum();
int main()
{
  int num1,num2,val;
  addnum();
}

int addnum() {
int num1,num2;
printf("Enter 2 numbers : ");
scanf("%d %d",&num1,&num2);
printf("Sum = %d \n" , (num1 + num2));
}
