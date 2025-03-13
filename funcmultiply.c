#include<stdio.h>
void mulNumbers(int num1,int num2);
int main(){
    int num1,num2,product;
    printf("Enter the first number:");
    scanf("%d",&num1);
    printf("Enter second number:");
    scanf("%d",&num2);
    mulNumbers(num1,num2);

    return 0;

}
    void mulNumbers(int num1,int num2){
       int product=num1*num2;
        printf("%dX%d=%d",num1,num2,product);

    }