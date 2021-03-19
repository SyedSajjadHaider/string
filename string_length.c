#include<stdio.h>
#include<string.h>
int main(){
	
char str[] = "Hello World";

	int len = sizeof(str)/sizeof(str[0]);
	printf("length ->%d\n",len);   //counts Null also
	printf("strlen ->%u\n",strlen(str)); // ignores Null
	
}


