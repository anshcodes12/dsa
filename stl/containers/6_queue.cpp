//QUEUE
//FIFO
//requires (#include<queue) file
//syntax: queue<int> q;

#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue>
using namespace std;

int main (){

queue<int> q;

q.push(1);
q.push(2);
q.push(3);

while(!q.empty()){
  cout << q.front() << " " << endl;
  q.pop();
}
return 0;
cout << endl;

}