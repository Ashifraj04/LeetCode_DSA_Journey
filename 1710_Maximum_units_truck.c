int compare(const void* a, const void* b) {
    int* boxA = *(int**)a;
    int* boxB = *(int**)b;
    return boxB[1] - boxA[1]; 
}
int maximumUnits(int** boxTypes, int boxTypesSize, int* boxTypesColSize, int truckSize){
  
    qsort(boxTypes, boxTypesSize, sizeof(int*), compare);
  
    int totalUnits = 0;
    for (int i = 0; i < boxTypesSize && truckSize > 0; i++) {
        int boxesToTake = (boxTypes[i][0] < truckSize) ? boxTypes[i][0] : truckSize;
        totalUnits += boxesToTake * boxTypes[i][1];
        truckSize -= boxesToTake;
    }
    return totalUnits;
}
