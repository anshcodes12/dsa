//MAP
//Is a Key:Value container 
//syntax: map<string, int> m;
//to change value of a unique key: m[key] = value; but a key can't be changed

#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<map>
using namespace std;

int main () {

map<string, int> m;

m["TV"] = 10000;
m["AC"] = 25000;
m["Tablet"] = 5000;
m["Heater"] = 2300;

//to insert new key:value pair
m.insert({"Camera", 15000}); //needed to specify object
m.emplace("Generator", 200000);// not needed to specify object

//Erase
m.erase("Heater"); //Erases a particular key

// to print
for(auto p:m) {
  cout << p.first << " " << p.second << endl;
  //Map automatically sorts the elements in ascending lexicographical order(alphabet wise)
}

//Find: helps finding a key:value pair if found it returns the iterator of that key, else it returns [m.end()]
if(m.find("TV") != m.end()) {
  cout <<"found\n";
}
else{
  cout <<"not found\n"; 
}

 cout << m.count("Camera") << endl; //counts the number of instances of such keys
return 0;

}

