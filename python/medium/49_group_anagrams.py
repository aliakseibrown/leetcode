class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        listValues = []
        lists = []
        dicSet = dict()
        i = 0
        for word in strs:
            sortedWord = ''.join(sorted(word))
            listValues.append(sortedWord)
            dicSet[sortedWord] = list()
        for v in listValues:
            dicSet[v].append(strs[i])
            i+=1
        for l in dicSet.values():
            lists.append(l)
        return lists


#another one with less memory usage
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        dicSet = defaultdict(list)
        for word in strs:
            sortedWord = ''.join(sorted(word))
            dicSet[sortedWord].append(word)
        return list(dicSet.values())
