class Solution:
    def moveZeroes(self, nums: List[int]) -> None:
        """
        Do not return anything, modify nums in-place instead.
        """
        p=0
        for q in range (len(nums)):
            if(nums[q]!=0):
                nums[p], nums[q]= nums[q], nums[p]
                p += 1
                