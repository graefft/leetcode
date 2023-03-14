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

 int checkAndShift();

int checkAndShift(int* nums, int numsSize, int val, int start, int end, int count)
{
    int temp = 0;

    // BASE CASE
    if (start >= end)
        return (count);

    // If VALUE MATCHES
    if (nums[start] == val)
    {
        count++;
        if (nums[end] == val)
            checkAndShift(nums, numsSize, val, start, end - 1, count);
        else
        {
            temp = nums[start];
            nums[start] = nums[end];
            nums[end] = temp;
            checkAndShift(nums, numsSize, val, start + 1, end, count);
        }
    }
    // IF VALUE DOESN'T MATCH
    if (nums[start] != val)
    {
        checkAndShift(nums, numsSize, val, start + 1, end, count);
    }
    return (count);
}

int removeElement(int* nums, int numsSize, int val){
    int count = 0;

    for (int i = 0; i < numsSize; i++)
        if (nums[i] == val)
            count++;

    checkAndShift(nums, numsSize, val, 0, numsSize-1, 0);

    return (numsSize - count);
}
