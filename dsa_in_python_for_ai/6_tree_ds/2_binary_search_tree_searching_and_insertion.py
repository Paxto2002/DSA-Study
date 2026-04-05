# A Binary Tree with one extra rule: the LEFT subtree always contains values SMALLER than the parent, and the RIGHT subtree always contains values LARGER. This rule makes searching incredibly fast — O(log n) instead of O(n)!
# Even its name suggests that a tree that reduces search time
# time complexity in Simple Binary Tree = O(n)
# time complexity in Simple Binary Tree = O(log(n)) ==> faster
# Numper of itertaions = height of the tree and height of tree = log(n)
# Interview Questions: 
# Q-1: Print all the elements of a BST in increasing order 
# Q-2: How to check a valid binary seach tree
# Q-3: Inorder-Traversal of BST
# But!!!!! All of these questions are same!!! so the interviewe confuses you

# ----------------- Node Class -----------------
class Node: 
    def __init__(self, value):
        self.left = None
        self.right = None
        self.data = value
def insertion_in_bst(root, value):
    if root is None:
        return Node(value)
    elif value == root.data:
        return root
    elif  value < root.data:
        root.left = insertion_in_bst(root.left, value)
    else:
        root.right = insertion_in_bst(root.right, value)
    return root

def search_in_bst(root, value):
    if root is None:
        print(f"Element {value} not found")
    elif value == root.data:
        print(f"Element {value} found")
    elif  value < root.data:
        search_in_bst(root.left, value)
    else:
        search_in_bst(root.right, value)

def in_order_traversal(root):
    if root is None:
        return []
    
    return (
        in_order_traversal(root.left) +
        [root.data] +
        in_order_traversal(root.right)
    )

# root = Node(20)
# root.left = Node(15)
# root.right = Node(30)
# root.left.left = Node(12)
# root.left.right = Node(18)
# root.right.right = Node(40)

root = insertion_in_bst(None, 20)
root = insertion_in_bst(root, 15)
root = insertion_in_bst(root, 30)
root = insertion_in_bst(root, 12)
root = insertion_in_bst(root, 18)
root = insertion_in_bst(root, 40)

print("In-Order Traversal:", in_order_traversal(root))
search_in_bst(root, 18)
search_in_bst(root, 100)