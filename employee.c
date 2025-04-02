#include<stdio.h>
struct empolyee{
  char name[20];
  int ID;
  float salary;
};
int main(){
  int limit;
  printf("Enter the Number of Employees for adding details:");
  scanf("%d",&limit);
  
  struct empolyee s[limit];
  for(int i=0;i<limit;i++){
    printf("Enter the Name:");
    scanf("%s",s[i].name);
    printf("Enter the ID number:");
    scanf("%d",&s[i].ID);
    printf("Enter the Salary:");
    scanf("%f",&s[i].salary);
    }
  
  for(int i=0;i<limit;i++){
    printf(" \n The Employee Details are:\n");
    
    printf("\n Name is:%s",s[i].name);
    printf("\n ID Number is:%d",s[i].ID);
    printf("\n Salary is:%.2f",s[i].salary);
    printf("\n-----------------");
  }
return 0; 
