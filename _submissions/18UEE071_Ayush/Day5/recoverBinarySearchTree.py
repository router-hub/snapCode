# Definition for a  binary tree node
class TreeNode:
    def __init__(self, x):
        self.val = x
        self.left = None
        self.right = None


class Solution:
    # @param A : root node of tree
    # @return a list of integers
    first = None
    last = None
    prev = None

    def recoverTree(self, A):
        self.first = None
        self.prev = None
        self.last = None
        self.traverse(A)
        return([self.last, self.first])

    def traverse(self, root):
        if(root == None):
            return
        
        self.traverse(root.left)

        if(self.prev is not None and self.prev > root.val):
            if(self.first is None):
                self.first = self.prev
                self.last = root.val
            else:
                self.last = root.val
                
        self.prev = root.val

        self.traverse(root.right)
