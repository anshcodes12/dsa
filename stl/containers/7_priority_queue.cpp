//Priority Queue 
//internally uses a max and min heap structure
//Don't need to include #include file
//Time complexity of push and pop is O(logn).
//Syntax: priority_queue<int> q;

#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
using namespace std;

int main () {
  //to keep highest on top uncomment the below command
  // priority_queue<int> q;


  //to reverse this
  priority_queue<int, vector<int>, greater<int>> q;

  q.push(5);
  q.push(3);
  q.push(10);
  q.push(4);
  
  while(!q.empty()) {
    cout << q.top() << " ";
    q.pop();
  }
   cout << endl;
   return 0;
}