/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* sortedSquares(int* nums, int numsSize, int* returnSize) {
    int i=0;
    int j=numsSize-1;
    int k=numsSize-1;
    int *result = malloc(numsSize*sizeof(int));

    while(i<=j){
        if(nums[i]*nums[i]>nums[j]*nums[j]){
            result[k] = nums[i]*nums[i];
            i++;
        }else{
            result[k] = nums[j]*nums[j];
            j--;
        }
        k--;
    }
    *returnSize = numsSize;
    return result;
}
