# Graph: 
# A = {1, 2, 3, 4, 5}  ==> Set each of this digit is the element of set and has 5 element
# B = {(1,2), (2,4), (3,6)} ==> 3 elements (ordered pairs)
# Now if we want to make a graph from B then we will represent each of these like this:
# 1 = (1,2)
# 2 = (2,4)
# 3 = (3,6)
# Now when we make its graph, it will be 1->2->3->1 
# Where - are the edges and 1,2,3 etc are vertices (vertex: Singular)
# But if we want to go from 1->3 then we will make a new edge because these edges are uni-directional

# --------------------- Types of Graph ---------------------
# 1) Undirected Graph
# 2) Directed Graph
# 3) Weighted Graph

# Memory Representation of Graph:
# 1) Matrix Representation
# 2) List Representation
# C = {(1,2), (2,3), (1,4)} i.e. 1->4,1->2->3->2
# We always make a square matrix 
# If u have 4 vertices then it'll be 4x4 matrix, if u have 3 vertices then it'll be 3x3 matrix, u have 5 vertices then it'll be 5x5 matrix
#      1      2      3     4
#    ___________________________
# 1 |     |      |      |      |
# 2 |     |      |      |      |
# 3 |     |      |      |      |
# 4 |     |      |      |      |
#   ___________________________

# So by default we will put zero in each of these
#      1       2       3         4
#    _______________________________
# 1 |   0  |   0   |   0   |    0   |
# 2 |   0  |   0   |   0  |     0   |
# 3 |   0  |   0   |   0   |    0   |
# 4 |   0  |   0   |   0   |    0   |
#   _______________________________
# If we have 0 then it means there are no edges and if we have 1 then it means that edge is present

# Now for undirected graph:
#       1       2      3       4
#    _______________________________
# 1 |   0  |   1   |   0   |    1   |
# 2 |   1  |   0   |   1   |    0   |  
# 3 |   0  |   1   |   0   |    0   |
# 4 |   1  |   0   |   0   |    0   |
#   _______________________________   ===> Means we can go from 2->3 and 3->2

# Now for Undirected Graph is Symmetric Matrix

# Now for directed graph:
#       1       2      3       4
#    _______________________________
# 1 |   0  |   1   |   0   |    1   |
# 2 |   0  |   0   |   0   |    0   |  
# 3 |   0  |   1   |   0   |    0   |
# 4 |   0  |   0   |   0   |    0   |
#   _______________________________   

# Now for weighted graph: for example distance between 1->2 3 KM then 
#       1       2      3       4
#    _________________________________
# 1 |   0  |   3   |   0   |    10   |
# 2 |   0  |   0   |   0   |    0    |  
# 3 |   0  |   5   |   0   |    0    |
# 4 |   0  |   0   |   0   |    0    |
#   __________________________________   

# In our matrix vertical 1,2,3,4 etc are source and horizontal 1,2,3,4 are destination!
# mat[1][2] ==> 1 is source and 2 is destination and = 1 means make an edge between them
# mat[2][1] = 1
# mat[2][3] = 5 ==> weighted graph
# mat[2][3] = 0 ==> Edge deleted

class Graph:
    def __init__(self, vertex):
        self.mat = [[0]*vertex for x in range(vertex)] 