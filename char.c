#include<stdio.h>
int main(){
  char name[15];
  printf("Enter your name");
  fgets (name,sizeof(name),stdin);
  printf("Greetings! %s",name);



 return 0;
 }
 
