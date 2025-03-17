-> DFS is a technique used to traverse a tree or graph.Here backtracking 
   is used for traversal. In this traversal first, the deepest node is 
   visited and then backtracks to its parent node if no sibling of that node exists.

-> DFS is of three types:
    1. Depth First Search (DFS) - Inorder
    2. Depth First Search (DFS) - Preorder
    3. Depth First Search (DFS) - Postorder

-> In the Inorder traversal, the nodes are recursively visited in this order:
    1. Left subtree
    2. Root node
    3. Right subtree

-> In the Preorder traversal, the nodes are recursively visited in this order:
    1. Root node
    2. Left subtree
    3. Right subtree

-> In the Postorder traversal, the nodes are recursively visited in this order:
    1. Left subtree
    2. Right subtree
    3. Root node

-> The time complexity of the Depth First Search (DFS) algorithm is O(V+E),
   where V is the number of vertices and E is the number of edges in the graph.

-> The space complexity of the Depth First Search (DFS) algorithm is O(V),
   where V is the number of vertices in the graph.

-> The Depth First Search (DFS) algorithm is used to solve problems like:
    1. Finding connected components in a graph
    2. Detecting cycles in a graph
    3. Topological sorting
    4. Solving puzzles like mazes
    5. Pathfinding algorithms like Dijkstra's algorithm and A* algorithm

