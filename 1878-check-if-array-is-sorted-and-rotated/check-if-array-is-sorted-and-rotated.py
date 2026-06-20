class Solution(object):
    def check(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        sort= sorted(nums)
        for i in range(len(nums)):
            rot= sort[i:] + sort[:i]
            if rot== nums:
                return True
        return False
        