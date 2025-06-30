//SET
//similar to map: only stores unique values
//needs #include file.
//Syntax: set<int> s;
//use insert() or emplace() to insert
//(insert, erase, count) is O(log n)

#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<map>
#include<unordered_map>
#include<set>
using namespace std;

int main () {

set<int> s;

s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(4);

cout << s.size() << endl;
for(auto val: s) {
  cout << val << " "; 
}

cout << endl;

return 0;
}

//no duplicates will be printed
//is sorted order