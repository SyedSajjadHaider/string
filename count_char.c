int count_char(char str[],char c){
  int i;
  int count=0;
  for(i=0; i<strlen(str); i++){
    if(str[i] == c){
      count++;
    }
  }
  return count;
}

int main(){

int x = count_char("xoxoxoxo",'x');

printf("%d",x);

}
