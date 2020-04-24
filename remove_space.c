#include<stdio.h>
#include<string.h>
void find_space(char []);
void remove_space(char [],int i);

int main(){
  char arr[] ="I LOVE INDIA";
  find_space(arr);
  printf("%s",arr);
  
  
}

void find_space(char str[]){
 int i; 
 for(i=0; i<strlen(str); i++){
   if(str[i] == ' '){
     //printf("found space");
     remove_space(str,i);
   }
 }
  
}

void remove_space(char str[],int i){
  while(str[i] !='\0'){
    str[i] = str[i+1];
    i++;
  }
  
}
