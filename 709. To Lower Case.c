char* toLowerCase(char* s) {
    int l=strlen(s);
    int i;
    for(i=0;i<l;i++){
        if(s[i]>=65&&s[i]<=90){
            s[i]=s[i]+32;
        }
    }
    return s;
}
