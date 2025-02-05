#include<stdio.h>
  int main(){
    int limit,i,item;
    printf("\n Enter the no.of elements:");
    scanf("%d",&limit);
    int array[limit];
    printf("\n Enter %d elements:",limit);
    for (i=0;i<limit;i++){
    scanf("%d",&array[i]);
    }
    printf("\n Enter the element to search");
    scanf("%d",&item);
    for(i=0;i<limit;i++){
    if(item==array[i]){
    printf("\n The given element found at position %d",i+1);
    }
    }
  return 0;
  }

 
