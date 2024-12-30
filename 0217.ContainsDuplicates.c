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