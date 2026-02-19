int searchInsert(int* nums, int numsSize, int target) {
    int c=0;
    for(int i=0;i<numsSize;i++){
        if(target==nums[i]){
            return i;
        }
       if(target>nums[i]){
            c++;
        }
    }
    return c;
}
