#include<stdio.h>
struct student{
  int rollNo;
  char name[20];
  float cgpa;
  char place[20];
};
  int main(){
    struct student s[3];
    for(int i=0;i<3;i++){
    printf("Enter your Roll Number:");
    scanf("%d",&s[i].rollNo);
    printf("Enter your Name:");
    scanf("%s",&s[i].name);
    printf("Enter your CGPA:");
    scanf("%f",&s[i].cgpa);
    printf("Enter your place:");
    scanf("%s",&s[i].place);
    }
     for(int i=0;i<3;i++){
    printf("\n The Student Details are:");
    printf("\n Name:%s",s[i].name);
    printf("\n Roll Number is:%d",s[i].rollNo);
    printf("\n CGPA:%.2f",s[i].cgpa);
    printf("\n Place:%s",s[i].place);
    }
  return 0;
  }
    
