#include<string.h>
void reverse_string(char *str){

  char *ptr1 = str; // startingByteAdd
  char *ptr2 = str + strlen(str)-1;
  char temp;
  while(ptr2>=ptr1){
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    ptr1++;
    ptr2--;
    }
}

int main(){
char arr[25]="ABCDEFG";
reverse_string(arr);
puts(arr);

}
