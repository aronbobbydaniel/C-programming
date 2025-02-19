#include<stdio.h>

int main(){
char string[20];
    printf("Enter the string: ");
    scanf("%s", string); 
    int length;
    for (length = 0; string[length] != '\0'; length++);
    for (int j = 0; j < length / 2; j++) {
        char temp = string[j];
        string[j] = string[length - j - 1];
        string[length - j - 1] = temp;
    }
    printf("Reversed string: %s\n", string);
    return 0;
}


