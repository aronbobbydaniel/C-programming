#include<stdio.h>
int main(){
  int n,i;
  printf("Enter the no of elements:");
  scanf("%d",&n);
  int numbers[n];
  printf("\n Enter the %d elements:",n);
  
  for(i=0;i<n;i++){
    scanf("%d",&numbers[i]);
  }
  for( i=0;i<n-1;i++){
    for(int j=0;j<n-i;j++){
      if(numbers[j]>numbers[j+1]){
         int temp=numbers[j];
         numbers[j]=numbers[j+1];
         numbers[j+1]=temp;
      }
    }
  }
  printf("\n The sorted array:\t");
  for( i=0;i<n;i++){
    printf("%d\t",numbers[i]);
  }
  return 0;
}
         
