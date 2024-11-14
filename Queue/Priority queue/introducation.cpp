Priority queue is a specail type of queue in which each element is associated with a 
priority and is served according to its priority.

A C++ priority queue is a type of container adapter, specifically designed such that 
the first element of the queue is either the greatest or the smallest of all elements 
in the queue, and elements are in non-increasing or non-decreasing order (hence we can 
see that each element of the queue has a priority {fixed order}).

In C++ STL, the top element is always the greatest by default. We can also change it to 
the smallest element at the top. Priority queues are built on the top of the max heap 
and use an array or vector as an internal structure. In simple terms, STL Priority 
Queue is the implementation of Heap Data Structure.

There are two type of priority queue

1.Aseending Priority Queue: Element can be inserted arbitrarily but only smallest 
element can be removed. For example, suppose there is an array having elements 4, 2, 8 
in the same order. So, while inserting the elements, the insertion will be in the same 
sequence but while deleting, the order will be 2, 4, 8.

2.Descending priority Queue: Element can be inserted arbitrarily but only the largest 
element can be removed first from the given Queue. For example, suppose there is an 
array having elements 4, 2, 8 in the same order. So, while inserting the elements, 
the insertion will be in the same sequence but while deleting, the order will be 8, 4, 2.

The Time Complexity of the priority queue is O(logn)