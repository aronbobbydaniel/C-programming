#include<stdio.h>
void checkPrime(int);
int main(){
    int num,i;
    printf("Enter a number:");
    scanf("%d",&num);
    checkPrime(num);
    return 0;

}
void checkPrime(int num){
    int flag=0;
    for(int i=2;i<num;i++){
        if(num%i==0){
        flag=1;
        break;
        }
    
    }
    if(flag==1){
        printf("%d is not a prime number.",num);
    }else{
        printf("%d is a prime number.",num);
    }
    }