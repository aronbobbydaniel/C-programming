#include<stdio.h>
struct student{
  int rollNO;
  char name[20];
  float cgpa;
};
  int main(){
    struct student s1;
    printf("Enter your Roll Number:");
    scanf("%d",&s1.rollNO);
    printf("Enter your Name:");
    scanf("%s",&s1.name);
    printf("Enter your CGPA:");
    scanf("%f",&s1.cgpa);
    printf("The Student Details are:");
    printf("\n Name:%s",s1.name);
    printf("\n Roll Number is:%d",s1.rollNO);
    printf("\n CGPA:%.2f",s1.cgpa);
    return 0;
  }
    
