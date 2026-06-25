class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        a = {}
        for i in range(len(nums)):
            b = target - nums[i]
            if b in a:
                return [a[b], i]
            a[nums[i]] = i

        