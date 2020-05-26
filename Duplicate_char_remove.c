#include<stdio.h>

void char_remove(char str[],int size){
  int index=0;
  int i,j;
  for(i=0; i<size; i++){
  /*-- FIND THE DUPLICATE CHARACTER --*/
    for(j=0; j<i; j++){
      if(str[i] == str[j])
        break;
    }
  /*---------------------------------*/


  /*-- IF THIS IS FIRST OCCURENCE ,INCLUDE IT -- */
    if(i==j){
      str[index++] = str[i];
    }
  /*---------------------------------------------*/
  }
}

int main(){
  char str[] = "AAABBBCCCAAAXXX";
  int size = sizeof(str)/sizeof(str[0]);
  char_remove(str,size);
  printf("%s",str);
}
