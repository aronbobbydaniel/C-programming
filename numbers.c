#include<stdio.h>
int main(){
  char value;
  printf("\nEnter a character in capital letter:");
  scanf("%c",&value);
  printf("\nIts ascii value :%d",value);
  value=value+32;
  printf("\nLower case letter: %c\n",value);
  printf("\nIts ASCII value is:%d",value);


  return 0;
}
