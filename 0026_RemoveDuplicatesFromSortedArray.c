#include <stdio.h>

/**
 * Given an integer array nums sorted in non-decreasing order,
 * remove the duplicates in-place such that each unique element appears only once. 
 * The relative order of the elements should be kept the same.
 */
int removeDuplicates(int* nums, int numsSize){
    int i = 0, j = 0, count = 0;

    if (numsSize == 0)
        return (0);

    if (numsSize == 1)
        return (1);
    
    for (i = 0; i < numsSize; i++)
    {
        if (i > 0 && nums[i] == nums[i-1])
        {
            continue;
        }
        else
        {
            count++;
            nums[j] = nums[i];
            j++;
        }
    }
    return (count);
}
