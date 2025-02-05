#include<stdio.h>
int main(){
 int temp;
 printf("Enter the temperature in centigrade:");
 scanf("%d",&temp);
 if (temp<0){
  printf("Freezing Temperature");
  }else if(temp >=0 && temp<=10){
   printf("Very Cold Whether");
  }else if(temp >=10 && temp <=20){
   printf("Cold Temperature");
  }else if(temp>=20 && temp<=30){
   printf("Normal Temperature");
  }else if(temp>=30 && temp<=40){
   printf("Hot Climate");
  }else if(temp>=40){
   printf("Very Hot Climate Stay Inside!!!");
  }
 return 0;
}
