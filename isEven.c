#include<stdio.h>
 int isEven(int num);
 int main(){
    int num,check;
    printf("Enter a number to check even or odd:");
    scanf("%d",&num);
    check=isEven(num);
    if(check==1){
        printf("%d is even",num);
    }else{
        printf("%d is odd",num);
    }
    return 0;

 }
 int isEven(int num){
   if (num%2==0){
    return 1;

   }else{
    return 0;
   }
    
 }