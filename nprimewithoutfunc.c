#include<stdio.h>
int main(){
    int num,limit,i,j;
    printf("Enter the limit:");
    scanf("%d",&limit);
    for(i=2;i<=limit;i++){
        int flag=0;
        for(j=2;j<i;j++){
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