#include<stdio.h>
int main(){
  int num1,num2;
  printf("Enter two numbers");
  scanf("%d%d",&num1,&num2);
  char operator;
  printf("Enter which operator you want");
  scanf(" %c",&operator);
  switch (operator){
      case '+':printf("Sum=%d",num1+num2);
        break;
      case '-':printf("Difference=%d",num1-num2);
        break;
      case '*':printf("Product=%d",num1*num2);
        break;
      case '/':printf("Division=%d",num1/num2);
        break;
      case '%':printf("Remainder=%d",num1%num2);
        break;
      default:printf("Invalid TRY AGAIN");
        break;
  }
  return 0;
}
