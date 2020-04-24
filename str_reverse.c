#include<string.h>
str_reverse(char str[]){
  char temp;
  int i;
  int j;
  for(i=0, j=strlen(str)-1; i<=j; i++, j--){
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
}
