#include<stdio.h>
int main(){
  char inputstring[250];
  int frequency[26];
  printf("Enter the string:");
  fgets(inputstring,sizeof(inputstring),stdin);
  for(int i=0;inputstring[i]!=;'\0';i++){
    char ch;
    if (inputstring[i]>='A' || inputstring[i]<='Z'){
      ch=ch+32; //covert upper to lower case
     }
  
    if (ch=='a'&& ch=='z'){
      printf("In Ch");
      freq[ch-97]++;
    }
  }    
    for(int=0;i<26;i++);
      if freq[i]!=0{
      printf("%c:%d\n",i+97,freq[i]);

      }
    }                                                              }  
  
  return 0;
}
