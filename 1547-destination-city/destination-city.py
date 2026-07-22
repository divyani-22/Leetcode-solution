class Solution(object):
    def destCity(self, paths):
        """
        :type paths: List[List[str]]
        :rtype: str
        """
        cities = set()
        for i in paths:
            cities.add(i[0])
        for i in paths:
            dest=i[1]
            if dest not in cities:
                return dest
        return ""        

        