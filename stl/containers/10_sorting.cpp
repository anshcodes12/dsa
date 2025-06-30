//SORTING
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

//sorting array
// int arr[5] = {3,5,6,7,9};
// sort(arr, arr+5);

//----------------------

//sorting vector
// vector<int> vec = {21,7,3,1,6,};
// sort(vec.begin(), vec.end());

//---------------------

//generally sorts in ascending order but for descending order
//use sort(arr, arr+n, greater<int>())
// vector<int> vec = {21,7,3,1,6,};
// sort(vec.begin(), vec.end(), greater<int>());

//---------------------
//to sort groups generally they are sorted on the basis of first number but to make on the basis of second number we have to make a custom comparator
//Custom comparator: we pass the two instances of a pair


for(int val : vec) {
  cout << val << " ";
}
cout << endl;
return 0;
}