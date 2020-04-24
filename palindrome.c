#include<stdio.h>
#include<string.h>
int main(){

char str[25];
puts("Enter the string");
gets(str);

int h = strlen(str)-1;
int i=0;

while(h>i){

if(str[i] != str[h]){
  printf("not a pallendrom");
  return;
  }

h--;
i++;
}
printf("string is pallendrom %s\n",str);

}
