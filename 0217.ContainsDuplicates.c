bool containsDuplicate(int* nums, int numsSize) {
    int offset = 1000000000;
    int range = 2000000001;

    bool* seen = (bool*)calloc(range,(sizeof(bool)));

    for(int i=0; i<numsSize; i++){
        int index = nums[i]+offset;
        if(seen[index]==true){
            free(seen);
            return true;
        }

        seen[index] = true;
    }
    free(seen);
    return false;
}

//Alternate Solution using sorting
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

// bool containsDuplicate(int* nums, int numsSize) {
//     qsort(nums, numsSize, sizeof(int), compare);
    
//     for (int i = 1; i < numsSize; i++) {
//         if (nums[i] == nums[i - 1]) {
//             return true;
//         }
//     }
    
//     return false;
// }
