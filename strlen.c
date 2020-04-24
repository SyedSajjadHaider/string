int strlen( const char *str){

  const char *temp = str;
  while(*temp != '\0'){
      temp++;
  }
  return (temp - str);
}
