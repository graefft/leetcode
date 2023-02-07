'''
--------------------
--- TIME -----------
--- O(n) - 70ms ----
--------------------
--- SPACE-----------
--- O(n) - 15.2mb --
--------------------
'''
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hashmap = {}
        for i in range(len(nums)):
            complement = target - nums[i]
            if complement in hashmap:
                return [hashmap[complement], i]
            hashmap[nums[i]] = i


'''
--------------------
--- TIME -----------
--- O(n^2) -3858ms--
--------------------
--- SPACE-----------
--- O(n) - 14.9mb --
--------------------
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(0, len(nums)):
            for j in range(i + 1, len(nums)):
                if nums[i] + nums[j] == target:
                    return [i, j]
        return [0, 0]
