class Solution:
    def maxArea(self, height: List[int]) -> int:
        l = 0
        r = len(height)-1
        volume = 0
        while l < r:
            width = r - l
            min_height = min(height[l],height[r])
            if volume < min_height*width: volume = min_height*width
            if height[l] < height[r]: l+=1
            elif height[l] > height[r]: r-=1
            else:
                l+=1
                r-=1
        return volume

