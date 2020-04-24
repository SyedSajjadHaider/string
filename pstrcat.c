char * xstrcat(char *t ,char *s){
    while(*t !='\0')
        t++;
    while((*t=*s)!='\0'){
        t++;
        s++;
    }
    return t;
}
