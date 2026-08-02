class Solution:
    def maxProfit(self, prices: List[int]) -> int:
        maxi = mini = prices[0]
        res = 0

        for i in range(len(prices)):
            if prices[i] < mini:
                mini = prices[i]
                maxi = prices[i]

            elif prices[i] > maxi:
                maxi = prices[i]
                res = max(res, maxi - mini)
        return res
