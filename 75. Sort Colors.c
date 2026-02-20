void sortColors(int* nums, int numsSize) {
    int i,j;
    for(i=0;i<numsSize;i++){
        for(j=i+1;j<numsSize;j++){
            if(nums[i]>nums[j]){
                int t=nums[i];
                nums[i]=nums[j];
                nums[j]=t;
            }
        }
    }
    for(i=0;i<numsSize;i++){
        printf("%d ",nums[i]);
    }
}
