char * xstrcat(char *t ,char *s){
    char *start = t;
    while(*t !='\0')
        t++;
    while((*t=*s)!='\0'){
        t++;
        s++;
    }
    return start;
}
