//Types of map
//1. Multi map - can store multiple duplicate keys hence can't use '[]' brackets 
//Syntax: multimap<string, int> m;

//2.Unordered map - 


#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<map>
using namespace std;

int main () {

multimap<string, int> m;

//CANNOT USE SQUARE BRACKETS UNLIKE MAPS❌
// m["TV"] = 10000;
// m["AC"] = 25000;
// m["Tablet"] = 5000;
// m["Heater"] = 2300;

//to insert either emplace or insert
m.emplace("tv", 100);
m.emplace("tv", 100);
m.emplace("tv", 100);
m.emplace("tv", 100);

//erase
// m.erase("tv"); //erases entire 'tv' instances

//to erase one instance
m.erase(m.find("tv"));

// to print
for(auto p:m) {
  cout << p.first << " " << p.second << endl;
  //Map automatically sorts the elements in ascending lexicographical order(alphabet wise)
}


}
