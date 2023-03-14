class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
    int i, count=0;
    
    for (i = 0; i < nums.size(); i++) 
    {
        if (nums[i] != val)
            nums[count++] = nums[i];
    }
    return count;
    }
};
