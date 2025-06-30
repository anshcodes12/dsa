/*Why VECTOR in place of ARRAY?
They are implemented as a dynamic array
Arrays are constant they neither expand nor shrink during runtime after declaration while vector are dynamic and have the ability to expand and shrink even during runtime
Creating vector is  very simple -> Syntax:
vector <int> vec; */

#include <iostream>
#include <vector> //to include vector in code
using namespace std;

int main() {

vector <int> vec = {1,2,3,4,5,6};
// Syntax 1: initialising the vector with some values

//Syntax 2 (To initialise a vector with same value for n number of times): "vector <integer> vec = (size,value)", used mostly in Dynamic Programming - Tabulation DP[]

//Syntax 3 (To initialise a vector with the initials of another vector)

//initially size is 0
//size: number of elements stored in the vector
//capacity: number of elements it can hold

// vec.push_back(1);//pushed '1'
// vec.push_back(2);//pushed '2'
// vec.push_back(3);//pushed '3'

// push backs adds element in the last of the data structure
// PUSH Back and Emplace back are similar
//WORKING OF VECTOR: (Imp**) While pushing a new element in a vector a block with extra space then prior elements is created and then the added to be 'element' is added.

vec.pop_back(); //pops element

cout << "size is:" << vec.size() << endl;
cout << "Capacity is:" <<  vec.capacity() << endl;

//Every value in Vector is indexed like arrays to navigate to any particular element: .at() & [].
cout << "Value at index 1 is: " << vec[1] << " or " << vec.at(1) << endl;

//To print the front and back element of a vector we use: vec.front() or vec.back()
cout << "Front is: " << vec.front() << endl;
cout << "Back is: " << vec.back()  << endl;

/* Some Functions:
1. Erase - Erase is used to of course erase an element 'vec.erase()'
but to erase an element on 0th position we don't write index no. 0 instead we write - 'vec.begin()'
and inside the erase: "vec.erase(vec.begin())"

to erase more "vec.erase(vec.begin() + 2)"
to erase a range: "vec.erase(start,end)"
Erase function changes the size of a vector but not the capacity

2. Insert - to insert a value: "vec.insert(position,value)"

3. clear - Clears/empties the vector: "vec.clear()" Size becomes 0 but capacity remains same

4. Empty - checks whether empty or not returns 1 for yes and 0 for not empty */

//Iterators in (vectors)
//two types: vec.begin & vec.end
//some more: reverse begin (rbegin) & (rend)
cout << *(vec.begin()) << endl;
cout << *(vec.end()) << endl;

/*
will give a compilation error or warning, depending on the compiler, because:
•	vec.begin() returns an iterator, not an integer or a directly printable value.
•	cout doesn’t know how to print iterators directly.
The dereference operator, often represented by an asterisk (*), is a symbol used in programming to access the value stored at a memory address held by a pointer */

//we use iterators to loop on something
//dereferencing is important (*)

//forward
vector <int>::iterator it;
for(it = vec.begin(); it!=vec.end(); it++) {
  cout << "Forward loop: " << *(it) <<endl;
}

//backward
// auto: used to avoid writing (vector <int>::interator it;)
for(auto it = vec.rbegin(); it!=vec.rend(); it++){
  cout << "Backward loop: " << *(it) << endl;
}

return 0;

}