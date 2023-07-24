class Solution:
    def isValidSudoku(self, board: List[List[str]]) -> bool:
        vocab = defaultdict(set)
        #check rows
        for i in range(9):
            for k in range(9):
                num = board[i][k]
                if num.isdigit():
                    if num in vocab[i]: return False
                    vocab[i].add(num)
                    if num in vocab[k+9]: return False
                    vocab[k+9].add(num)
                    if board[i][k] in vocab[(i//3,k//3)]: return False
                    vocab[(i//3,k//3)].add(board[i][k])
        return True
