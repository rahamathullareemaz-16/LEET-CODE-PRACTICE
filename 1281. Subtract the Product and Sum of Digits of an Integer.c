int subtractProductAndSum(int n) {
    int s,sum=0,mul=1;
   while(n>0){
    s=n%10;
    sum=s+sum;
    mul=mul*s;
    n=n/10;
   }
   mul=mul-sum;
   return mul; 
}
