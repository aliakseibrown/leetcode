class Solution:
    def frequencySort(self, s: str) -> str:
        deck = Counter(s)
        the_list = []
        for k, v in deck.items():
            the_list.append(k*v)
        the_list.sort(key=len, reverse=True)
        return ''.join(the_list)

