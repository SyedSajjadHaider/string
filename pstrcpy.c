void pstrcpy(char *t,const char *s){

  while((*t=*s) != '\0'){
    t++;
    s++;
  }

}
