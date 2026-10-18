    int maximumCount(int* nums, int numsSize){
    int low = 0;
    int high = numsSize-1;
    int mid;
    int posCount = 0;
    int negCount = 0;
    int firstNonNegative = numsSize;
    


    //first non negative integer(>=0)
    while(low<=high){
        mid = low + (high-low)/2;
        if(nums[mid] >= 0){
            firstNonNegative = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }


    //first positive integer(>0)
    low = 0;
    high = numsSize-1;
    int firstPositive = numsSize;

    while(low<=high){
        mid = low + (high-low)/2;
        if(nums[mid] > 0){
            firstPositive = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }

    negCount = firstNonNegative;
    posCount = numsSize - firstPositive;

    if(posCount > negCount){
        return posCount;
    }else 
        return negCount;
}    
