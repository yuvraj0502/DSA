Double ended Queue: Double Ended Queue is also a Queue data structure in which 
the insertion and deletion operations are performed at both the ends (front and rear). 
That means, we can insert at both front and rear positions and can delete from both 
front and rear positions.  Since Deque supports both stack and queue operations, it 
can be used as both. The Deque data structure supports clockwise and anticlockwise 
rotations in O(1) time which can be useful in certain applications. Also, the 
problems where elements need to be removed and or added both ends can be efficiently 
solved using Deque.


Operation:

1.push_front() : inserts the element at the beginning
2.push_back() : inserts the element at the end
3.pop_front(): remove the first element from the deque
4.pop_back(): remove the last element from the deque
5.front(): gets the first element from the deque
6.back(): gets the last element from the deque
7. empty(): checks whetherthe the queue is empty or not
8.size(): determine the numbers of elements in the queue
