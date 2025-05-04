class Item:
    def __init__(self,val,w):
        self.value = val
        self.weight = w
        
class Solution:    
    #Function to get the maximum total value in the knapsack.
    def fractionalknapsack(self, w,arr,n):
        
        # code here
        
        sorted_items = sorted(arr, key = lambda item: item.value/item.weight, reverse=True)
        
        total_value = 0.0
        
        for item in sorted_items:
            if w >= item.weight:
                w -= item.weight
                total_value += item.value
            else:
                total_value += item.value * ( w / item.weight)
                break
            
        
        return total_value;

