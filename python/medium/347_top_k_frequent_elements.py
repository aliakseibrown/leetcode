class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        dic = defaultdict(int)
        answer = []
        for i in nums:
            dic[i]+=1
        listt = list(sorted(dic.items(), key=lambda item: item[1]))
        #last k elements of the list and the first item
        for l in listt[-k:]:
            answer.append(l[0])
        return answer
