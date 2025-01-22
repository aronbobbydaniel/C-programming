#include<stdio.h>
int main(){
  float number1,number2;
  float sum;
  printf("Enter two integer numbers");
  
  scanf("%f%f",&number1,&number2);
  sum=number1+number2;
  printf("%f+%f=%f",number1,number2,sum);
  return 0;
}
