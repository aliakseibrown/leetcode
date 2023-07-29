class Solution:  
    def searchMatrix(self, matrix: List[List[int]], target: int) -> bool:
        for i in matrix:
            if i[0] <= target and i[-1] >= target:
                l = 0
                r = len(i) - 1
                while l <= r:
                    mid = (l + r) // 2
                    if i[mid] == target: return True
                    if i[mid] < target:
                        l = mid + 1
                    else:
                        r = mid - 1
                return False
        return False
