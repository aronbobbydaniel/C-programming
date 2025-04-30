#include<stdio.h>
#include<stdlib.h>
int main(){
  int *array;
  int n;
  printf("Enter the no of elements:");
  scanf("%d",&n);
  array = (int *) calloc(n,sizeof(int));
  printf("Enter the elements:");
  for(int i=0;i<n;i++){
    scanf("%d",array+i);
  }
  for(int i=0;i<n;i++){
    printf("%d",*(array+i));
  }
  return 0;
}
  
