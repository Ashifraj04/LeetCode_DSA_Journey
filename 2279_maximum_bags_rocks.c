#include<stdlib.h>

int compare(const void* a,const void* b){
    int x = *(int *)a;
    int y = *(int *)b;

    return x-y;
}

int maximumBags(int* capacity, int capacitySize, int* rocks, int rocksSize, int additionalRocks){
    int needed[rocksSize];
    for(int i=0; i<capacitySize; i++){
        needed[i] = capacity[i]-rocks[i];
    }

    qsort(needed,rocksSize,sizeof(int),compare);

    int count = 0;
    for(int i=0; i<rocksSize; i++){
        if(additionalRocks >= needed[i]){
            additionalRocks -= needed[i];
            count++;
        }else{
            break;
        }
    }
    return count;
}
