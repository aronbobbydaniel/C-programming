#include<stdio.h>
int powerNum(int base,int expo){
  if(expo==1){
    return base;
  }else{
    return base*powerNum(base,expo-1);
  }
}
int main(){
  int base,expo,result;
  printf("Enter the base:");
  scanf("%d",&base);
  printf("Enter the exponent:");
  scanf("%d",&expo);
  result=powerNum(base,expo);
  printf("Power=%d",result);
  return 0;
}
  

