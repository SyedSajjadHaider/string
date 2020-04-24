char * astrcat(char arr1[],const char arr2[] ){
  int i=0,j=0;
  while(arr1[i] != '\0')
    i++;
  while((arr1[i] = arr2[j]) !='\0'){
      i++;
      j++;
  }
  return arr1;


}
