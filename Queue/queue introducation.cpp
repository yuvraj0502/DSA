Queue is FIFO (first in first out) type of arrangement.
Element are inserted at the back(end) and are deleted from the front.


function 
1. empty() : return the whether the queue is empty.it return true if the queue empty 
             otherwise return false.

2. size()  : return the size of queue.

3. swap()  : Exchange the contents of two queues but the queues must be of the same
             data type.

4. emplace() : insert a new element into queue container, the new element is added to 
               the end of the queue.

5. front() : return a reference to the first element of the queue.

6. back() : return a reference to the last element of the queue.

7. push(x) : adds the element 'x' at the end of the queue.

8. pop() : Deletes the first element of the queue.


Time Complexity : O(n) , where n is the number of the queue element.
Space Complexity : O(n), where n is the number of the queue element.