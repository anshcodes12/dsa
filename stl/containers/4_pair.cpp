//PAIR

//Whenever we want to make group of two same or different datatypes so that they are implemented together we use pair

//we don't need to #include anything for pair, simply write a syntax:
// pair<int, int> p = {1,5}; or pair<int, string> p;
//to access values (cout << p.first) vice versa.


#include <iostream>
#include <vector>
#include <list>
#include<deque>
using namespace std;

int main () {

  pair<string, int> p = {"Ansh", 21}; //string in (""), char in ('')

  // To avoid lengthy line: write (auto p = make_pair("Ansh", 21);)

  cout << p.first << endl;//Ansh

  //pair of pair
  pair<int, pair<int, int>> p1 = {1, {2,3}};
  cout << p1.first << endl; //1
  cout << p1.second.first << endl; //2

  //Vector of pair
  vector<pair<int, int>> vec = {{1,2},{2,3},{3,4}};

  vec.push_back({4,5}); //inserts as it assumes you gave ready made pairs
  vec.emplace_back(4,5); //in-place object create

  //although push_back is mostly used while emplace_back is more efficient and works faster

  for(pair<int, int> p : vec) {
    cout << p.first << " " << p.second << endl;
    //we can push pairs in vector using push_back and emplace_back (see above)
  }
  return 0;
}