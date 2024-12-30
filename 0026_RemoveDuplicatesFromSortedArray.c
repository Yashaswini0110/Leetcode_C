//Time Complexity: O(n)

int removeDuplicates(int* nums, int numsSize) {
    int unique = 0;
    for(int i=0; i<numsSize; i++)
    {
        if(nums[i]!=nums[unique])
        {
            unique++;
            nums[unique]=nums[i];
        }
    }
    return unique+1;
}