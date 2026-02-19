double findMaxAverage(int* nums, int numsSize, int k) {
    long maxsum=0,sum=maxsum;
    int i;
    for(i=0;i<k;i++){
        sum=nums[i]+sum;
    }
    maxsum=sum;
    for(i=k;i<numsSize;i++){
        sum=sum+nums[i]-nums[i-k];
        if(sum>maxsum){
            maxsum=sum;
        }
    }
    return (double)maxsum/k;
}
