class Solution:
    def findDuplicates(self, nums: List[int]) -> List[int]:
        duplicate = []
        nums.sort()
        for i in range(1, len(nums)):
            if(nums[i]==nums[i-1]):
                duplicate.append(nums[i])
        return duplicate