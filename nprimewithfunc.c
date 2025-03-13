#include<stdio.h>
void checkPrime(int limit);
int main(){
    int limit,i,j;
    printf("Enter the limit:");
    scanf("%d",&limit);
    checkPrime(limit);
    return 0;

}
void checkPrime(int limit){
    
    for(int i=2;i<=limit;i++){
        int flag=0;
        for(int j=2;j<i;j++){
            if(i%j==0){
                flag=1;
                break;

            }
        }

    
    if(flag==1){
        printf("\n%d is not a prime number.",i);
    }else{
        printf("\n%d is a prime number.",i);
    }
    }
}