/* Replace duplicate character with dash symbol */
#include<stdio.h>
#include<string.h>
void occurrence(char arr[]){
  int i,j,count=0;  
  for(i=0; i<strlen(arr); i++){
    for(j=0; j<strlen(arr); j++){
      if(arr[i] ==arr[j]){
        count++;
        if(count >1){
           arr[j] ='-';
        } 
      }
    }
    count = 0;
  }
  printf("%s",arr);
}
int main(){
char arr[] ="sajjad";
occurrence(arr);

}
