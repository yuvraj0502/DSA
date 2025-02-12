A heap is a special type of tree data structure.
It is a complete binary tree.
Two type of the heap: 
1 Max-Heap
2 Min-Heap

Max-Heap : The value of the root node must be the greatest among all its descendant 
and the same thing must be done for its left and right sub-tree also.

Min-Heap : The value of the root node must be the smallest among all its descendant
and the same thing must be done for its left and right sub-tree also.

-> The maximum or minimum element is always at the root of the root of the heap.
-> The relationship between the parent node at index 'i' and its children is 
   as formula : left child at index 2i+1 and right child at index 2i+2.
-> As the tree is complete binary tree, all levels are filled except possibly 
   the last level and the last level is filled from the left to right.
-> when insert an item we insert it at the last available slot and then rearrage 
    the nodes so that the heap property is maintained.
-> when we remove an item ,we swap root with the last node to make sure either
   the max or min item is removed. Then we rearrange the remaining node to 
   ensure heap property(max or min)
-> Operations supported by max-heap and min-heap are same.
-> The difference is just the min-heap contains minimum element at root 
   of the tree and max-heap contains maximum element at root of the tree.

Binary Heap : A Binary heap is complete binary tree which is used to store
             data efficiently to get the max or min element based on its type.
             A Binary Heap Tree is either Min Heap or Max Heap.In a Min Binary heap 
             the key at the root must be minimum amoung the key present is BinaryHeap
             The same property must be recursively True for all nodes is binary Tree
             Max Binary Heap is similar to min Heap.


Heapify : Heapify is a process of creating a heap data structure from a binary tree.
