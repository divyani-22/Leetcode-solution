class Solution(object):
    def pivotArray(self, nums, pivot):
        """
        :type nums: List[int]
        :type pivot: int
        :rtype: List[int]
        """
        a=[]
        b=[]
        c=[]
        for i in nums:
            if i<pivot:
                a.append(i)
            elif i==pivot:
                b.append(i)
            else:
                c.append(i)
        return a+b+c           





      
     
        