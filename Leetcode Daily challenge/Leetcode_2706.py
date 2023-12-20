class Solution:
    def buyChoco(self, prices: List[int], money: int) -> int:
        prices.sort()
        n=prices[0]+prices[1]
        if money<n:
            return money
        return money-n
        