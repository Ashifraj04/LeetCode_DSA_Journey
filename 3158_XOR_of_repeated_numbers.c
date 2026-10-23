int duplicateNumbersXOR(int* nums, int numsSize) {
    int count[51] = {0};
    int result = 0;
    for(int i=0; i<numsSize; i++){
        count[nums[i]] += 1;
        if(count[nums[i]] == 2){
            result ^= nums[i];
        }
    }
    return result;
}
