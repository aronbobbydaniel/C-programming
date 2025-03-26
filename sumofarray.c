#include<stdio.h>
int sumArray(int array[],int size){
  int i,sum=0;
  for(i=0;i<size;i++){
    sum=sum+array[i];
  }
  return sum;
}
int main(){
  int size;
  printf("Enter the size of the array:");
  scanf("%d",&size);
  int array[size];
    for(int i=0;i<size;i++){
      scanf("%d",&array[i]);
    }
  int sum=sumArray(array,size);
  printf("The sum of the array of elements=%d",sum);






  return 0;
}
  
  
