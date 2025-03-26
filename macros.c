#include<stdio.h>
#define pi 3.14159
#define circle pi*radius*radius
#define cylinder pi*radius*radius*height
int main(){
  int radius,height;
  printf("Enter the radius of circle and cylinder and height of cylinder:");
  scanf("%d%d",&radius,&height);
  printf("Area of the circle:%f",circle);
  printf("Area of the cylinder:%f",cylinder);
return 0;
}
  
