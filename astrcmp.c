strcmparr(char arr1[] ,const char arr2[]){
  int i=0;  
  while(arr1[i] == arr2[i]){
      if(arr1[i] == '\0')
          return 0;
      i++;
      }
      return (arr1[i] - arr2[i]);
  
}
