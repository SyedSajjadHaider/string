char * pstrcpy(char *t,const char *s){
  char *start = t;
  while((*t=*s) != '\0'){
    t++;
    s++;
  }
  return start;

}
