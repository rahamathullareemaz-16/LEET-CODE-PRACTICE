bool isPalindrome(int x) {
    if (x < 0 || (x % 10 == 0 && x != 0))
        return false;
    long rev=0;
    int s=x;
    while(x>0){
        rev=rev*10 + (x%10);
        x=x/10;
    }
    if(rev==s){
        return true;
    }
    return false;
}
