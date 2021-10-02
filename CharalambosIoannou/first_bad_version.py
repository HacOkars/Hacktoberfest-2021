# The isBadVersion API is already defined for you.
# @param version, an integer
# @return an integer
# def isBadVersion(version):

class Solution:
    def firstBadVersion(self, n):
        # Brute force is O(N)
        """
        :type n: int
        :rtype: int
        """
        # binary search
        
        left = 1 # set two pointers
        right = n
        
        while left< right: # each time slice array by half and check if it is bad version
            mid = left + (right - left) / 2
            if (isBadVersion(mid) == False): # repeat for the half that the bad version was found. Discard half the array every time
                left = mid + 1
            else:
                right = mid
        
        return int(left)
        
        # Time is O(log(n))
