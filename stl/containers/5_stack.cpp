//STACK
//works on LIFO (last in first out)
//non-sequential container
/*

visual representation of stack
|     |
|_____|
|_____|
|_____|

*/

//syntax: stack<int> s;
//operations: push, pop, top, size, empty, swap
// we have to (#include<stack>)


#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
using namespace std;

int main () {
   stack<int> s;
   
   s.push(1);
   s.push(2);
   s.push(3);

   stack<int> s2;
   s2.swap(s); //swapping of both stacks

  //  while(!s.empty()) {
  //   cout << s.top() << endl;
  //  }

  cout << "s size: " << s.size() << endl; //0
  cout << "s2 size: "<< s2.size() << endl;//3

  return 0;

}