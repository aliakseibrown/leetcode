class Solution:
    def longestCommonSubsequence(self, text1: str, text2: str) -> int:
        matrix = [[0 for i in range(len(text2)+1)] for j in 
range(len(text1)+1)]
        for i in range(len(text1) -1, -1, -1):
            for j in range(len(text2) -1, -1, -1):
                if text1[i] == text2[j]:
                    matrix[i][j] = matrix[i+1][j+1] + 1
                else:
                    matrix[i][j] = max(matrix[i][j+1], matrix[i+1][j])
        return matrix[0][0]
