//LIST

//list is also a sequential container like vector but they are internally implemented as a doubly linked list means they can be pushed and popped from both ends.

// we create (#include <list>) first.

//Syntax: list<integer> l={1,2,3}

#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main() {

  list <int> l = {1,2,3,4,5}; //can initialise like this

//OPERATIONS IN LIST
//push front
  l.push_front(1);
  l.push_front(2);
//push back
  l.push_back(5);
  l.push_back(1);
//pop front
l.pop_front();
//pop back
l.pop_back();

//to print list we can create a for loop
for(int val : l) {
  cout << val << " ";
}
cout << endl;

return 0;

}