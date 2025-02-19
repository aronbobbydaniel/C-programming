#include<stdio.h>
#include<string.h>
int main(){
  char string1[50],string2[50];
  int result;
  printf("Enter the  First String:");
  scanf("%s",string1);
  printf("Enter the Second String:");
  scanf("%s",string2);
  result=strcmp(string1,string2);
    if (result==0){
    printf("Both Strings are Equal");
    }else{
    printf("Both Strings are not equal");
    }
    
  
return 0;
}
