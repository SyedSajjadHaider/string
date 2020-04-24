#include<stdio.h>
#include<string.h>
void string_pos(char []);
void reverse(char *,char *);

void string_pos(char arr[]){
  
int i;
char *ptr =arr; 
for(i=0; i<=strlen(arr); i++){
  if(arr[i] == ' ' || arr[i] == '\0'){
    reverse(ptr,arr+i-1);
    ptr = arr+i+1;
  }
 } 
}


void reverse(char *f1,char *f2){
  char temp;
  while(f2>f1){
    temp = *f1;
    *f1=*f2;
    *f2= temp;
     f1++;
     f2--;
  }  
}

int main(){
char arr[] = "I LOVE INDIA";
string_pos(arr);
printf("->%s",arr);


}
