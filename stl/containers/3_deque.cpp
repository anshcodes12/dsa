//DEQUE = Double ended queue

// Don't get confused with DEQUE and DEQUEUE first is double ended queue while second one is a generic word determines the popping of elements

//very similar to list

/*DIFFERENCE IN LIST AND DEQUE is List are internally implemented as doubly linked list while Deque are implemented as dynamic array hence random access is possible in deque but not in list */

// Syntax: deque<int> d = {1,2,3}

#include <iostream>
#include <vector>
#include <list>
#include<deque>

int main () {
   
   deque<int> d = {1,2,3,4,5}
   for(int val : d) {
    cout << val << " ";
   }
   cout << endl;

   cout << d[2] << endl; //random access which is possible in deque only not in list
   
   return 0;
}