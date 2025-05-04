from collections import List

class Solution:
    
    
## Initial approach

    def numEquivDominoPairs(self, dominoes: List[List[int]]) -> int:

        # sort each domino and put it in a map

        domino_map = {}
        ans = 0

        for domino in dominoes:

            key = tuple(sorted(domino))

            domino_map[key] = domino_map.get(key, 0) + 1

        for key, value in domino_map.items():

            print(value)

            if value >= 2:

                # nc2 pairs
                ans += (value * (value - 1)) // 2


        return ans
    
## Fewer lines for the same logic

def numEquivDominoPairs(self, dominoes: List[List[int]]) -> int:

        # sort each domino and put it in a map

        domino_map = {}
        ans = 0

        for domino in dominoes:


            key = tuple(sorted(domino))
            ans += domino_map.get(key, 0)
            domino_map[key] = domino_map.get(key, 0) + 1


        return ans