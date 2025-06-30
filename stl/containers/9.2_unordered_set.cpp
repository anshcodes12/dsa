//Unordered set
//O(1)
//No duplicates are printed 



#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<map>
#include<unordered_map>
#include<set>
#include<unordered_set>
using namespace std;

int main () {

unordered_set<int> s;

s.insert(1);
s.insert(2);
s.insert(3);
s.insert(4);
s.insert(4);
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