class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        max_sell = 0
        sell = 0
        for l in range(len(prices)-1):
            diff = prices[l+1] - prices[l]
            sell+= diff
            if sell > 0:
                max_sell = max(max_sell, sell)
            else: sell = 0
        return max_sell
