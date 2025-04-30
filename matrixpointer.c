#include<stdio.h>
#include<stdlib.h>

int main(){
  int **matrix;
  int rows = 2, cols = 3;

  matrix = (int **)malloc(rows * sizeof(int *));
  for(int i = 0; i < rows; i++){
    matrix[i] = (int *)malloc(cols * sizeof(int));
  }

  printf("\n Enter the elements:");
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      scanf("%d", (*(matrix + i) + j));  
    }
  }

  printf("\nThe elements\n");
  for(int i = 0; i < rows; i++){
    for(int j = 0; j < cols; j++){
      printf("%d \t", *(*(matrix + i) + j));  
    }
    printf("\n");
  }

return 0;
}

