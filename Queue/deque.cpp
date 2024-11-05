In above method extra py queue is requiredo first copy all element f queue which is not
space efficient method. By using dequeuewe can iterate with efficient space which provides 
all the standard operations of queue. We can traverse on dequeue using for range based for 
loop. 
We can use dequeue: :cbegin() and dequeue: :cend() to print dequeue in forward direction 
and dequeue: :crbegin() and dequeue: :crend() to print dequeue in backward direction.





#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
int main()
{
	deque<int> dq;
	dq.push_back(1);
	dq.push_back(2);
	dq.push_back(3);
	dq.push_back(4);
	dq.push_back(5);
	
	cout << "Printing dequeue in forward direction : \n";
	for(auto it = dq.cbegin();it!=dq.cend();it++)
	{
		cout << *it << " ";
	}
	
	cout << "\n";
	
	cout << "Printing dequeue in reverse direction : \n";
	for(auto it = dq.crbegin();it!=dq.crend();it++)
	{
		cout << *it << " ";
	}
	
	return 0;
}
