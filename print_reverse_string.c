#include<stdio.h>
int main(){

  char str[20];
  int i;
  puts("Enter the string");
  gets(str);
  int len = strlen(str)-1;
  for(i=len; i>=0; i-- ){
    printf("%c",str[i]);
  }
}
