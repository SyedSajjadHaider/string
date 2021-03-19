
#include<stdio.h>

char * remove_duplicate(char str[],int len){
	int index =0,i,j;
	for(i=0; i<len; i++){
		for(j=0; j<i; j++){
			if(str[i] == str[j])
				break;
		}
		if(i==j)
			str[index++] = str[i];
	}
	return str;
	
}

int main(){
	char str[] = "sajjad";
	int len = sizeof(str);
	printf("%s",remove_duplicate(str,len));
}
