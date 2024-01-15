class Solution:
    def findWinners(self, matches: List[List[int]]) -> List[List[int]]:
        win = defaultdict(int)
        loss = defaultdict(int)
        answer = []
        for l in matches:
            win[l[0]]+=1
            loss[l[1]]+=1
        temp = []
        temp2 = []
        for i in win.keys():
            if loss[i] == 0:
                temp.append(i)
        for k, v in loss.items():
            if v == 1:
                temp2.append(k)
        return [sorted(temp), sorted(temp2)]
