#include<stdio.h>
int main(){
  int limit,i,sum=0,num,avg;
  printf("Enter the Limit:");
  scanf("%d",&limit);
  
  int n[limit];
  printf("Enter the elements:");
  for(i=0;i<limit;i++){
    
    scanf("%d",&n[i]);
    
  }
  for(i=0;i<limit;i++){
  
  
    sum+=n[i];
  }
  
  avg=sum/limit;
    printf("The average is: %d\n", avg);
  
  

  
  

 
return 0;
}
    
  
    
