bool isPowerOfTwo(int n) {
  long i;
  for(i=2;i<=n;i=i*2){
     if(i==n){
        return true;
     }
  }
  if(n==1){
    return true;
  }
  return false;
}
