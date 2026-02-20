int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int i, j;
    for (i = 0; i < numsSize; i++) {
        int sum = target;
        for (j = i + 1; j < numsSize; j++) {
            int max = nums[i] + nums[j];
            if (max == sum) {
               int* result = (int*)malloc(2 * sizeof(int));
                result[0] = i;
                result[1] = j;
                *returnSize = 2;
                return result;
            }
        }
    }

    return 0;
}
