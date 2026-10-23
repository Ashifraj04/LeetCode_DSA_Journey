int singleNumber(int* nums, int numsSize) {
    int xor = nums[0];
    for(int i=1; i<numsSize; i++){
        xor ^= nums[i];
    }
    return xor;
}
