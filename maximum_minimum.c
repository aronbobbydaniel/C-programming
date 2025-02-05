#include<stdio.h>
int main(){
   int limit,i,item,max,min;
   printf("\n Enter the no.of elements:");
   scanf("%d",&limit);
   int array[limit];
   printf("\n Enter %d elements:",limit);
   for (i=0;i<limit;i++){
   scanf("%d",&array[i]);
   }
   max=array[0];
   min=array[0];
   for (i=0;i<limit;i++){
    if (array[i]>=max){
      max=array[i];
    }
  }
  for (i=0;i<limit;i++){
    if (array[i]<=min){
      min=array[i];
    }
  }
  printf("\n Largest number is %d",max);
  printf("\n Smallest number is %d",min);



return 0;
}
