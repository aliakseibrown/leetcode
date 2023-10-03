# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def traversal(self, root, level, mapa):
        if root == None: return
        level +=1
        mapa[level].append(root.val)
        self.traversal(root.left, level, mapa)
        self.traversal(root.right, level, mapa)

    def levelOrder(self, root: Optional[TreeNode]) -> List[List[int]]:
        mapa = defaultdict(list)
        level = 0
        answer = []
        self.traversal(root, level, mapa)
        for i in mapa.values():
            answer.append(i)
        return answer
        
