stack are a container LIFO(last in first out) type of working

stack function
   1. empty() : This method is used to check to whether the stack is empty or not. This function 
              do not take any parameter,they only return value true or false

   2. size() :  This function does not take any parameter. return the number of element
              present in the stack container,if there are not present any number then 
              return 0.

   3. Top()  :  return a reference to the top most element of the stack, this function does not 
              take any  parameter.if the stack is empty,its behaviour is undefined

   4. push(value) :  This function is used to insert or push an element at the top of container
                     this function does not return any value.

   5. pop()  :   This function to remove or pop the element from the top of stack.This function
                 does not take any parameter, this function does not return any value.

   6. emplace(value) : This function is used to insert a new element into the stack container, the new 
                 element is added on top of the stack

   7. swap() : This function is used to swap the contents of one stack with another stack of same
         type but the size may vary.
         Time Complexity : O(1)
         Auxiliary Space : O(n)




Time Complexity : The time Complexity of this program is O(N), here N is number of total number
                  element in the stack.

Space Complexity : The space Complexity of this program is O(N),here N is number of total number
                   element in the stack.




 