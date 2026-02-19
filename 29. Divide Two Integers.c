int divide(int dividend, int divisor) {
    long s=divisor;
    long l=dividend;
    long dividend1=dividend;
    long divisor1=divisor;
    if (dividend == -2147483648 && divisor == -1){
    return 2147483647;
    }
    else if(s<0&&l<0){
         dividend1=(long)dividend*(-1);
         divisor1=(long)divisor*(-1);
    }
    else if(s<0){
         divisor1=(long)divisor*(-1);
    }
    long n=(dividend1/divisor1);
    if(s<0&&l<0){
        return n;
    }
    else if(s<0&&l>0){
        return -n;
    }
    else{
        return n;
    }
}
