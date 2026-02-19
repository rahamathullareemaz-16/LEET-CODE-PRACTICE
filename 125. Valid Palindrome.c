bool isPalindrome(char* s) {
    int i;
    int l=strlen(s);
    int c=0;
    char *n=(char*)malloc((l+1)*sizeof(char));
    for(i=0;i<l;i++){
        if((s[i]>64&&s[i]<91)||(s[i]>96&&s[i]<123)||(s[i]>=48&&s[i]<=57)){
            n[c]=tolower(s[i]);
            c++;
        }
    }
    n[c]='\0';
    int s1=strlen(n);
    for(i=0;n[i]!='\0';i++){
        if(n[i]!=n[s1-i-1]){
            return false;
        }
    }
    return true;
}
