class Solution(object):
    def groupAnagrams(self, strs):
        """
        :type strs: List[str]
        :rtype: List[List[str]]
        """
        x = {}
        for s in strs:
            a = "".join(sorted(s)) #"".join(...) combines the characters of the list into one string.
            if a not in x:
                x[a] = []
            x[a].append(s)
        return list(x.values())
        