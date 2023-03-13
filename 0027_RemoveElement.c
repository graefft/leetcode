#include <stdio.h>


/**
 * REMOVE ELEMENT
 *
 * Given an integer array nums and an integer val, remove all occurrences of val in nums in-place. The relative order of the elements may be changed.

 * Since it is impossible to change the length of the array in some languages, 
 * you must instead have the result be placed in the first part of the array nums. 
 * More formally, if there are k elements after removing the duplicates, 
 * then the first k elements of nums should hold the final result. 
 * It does not matter what you leave beyond the first k elements.
*/
int removeElement(int* nums, int numsSize, int val){
    int i, j, delete, count = 0;

    for (i = 0; i < numsSize; i++)
        if (nums[i] == val)
            count++;

    for (i = 0; i < numsSize; i++)
    {
        while (nums[i] == val)
        {
            for (j = i; j < numsSize-1; j++)
                nums[j] = nums[j+1];

            nums[j] = '_';
        }
    }
    return (numsSize - count);
}
