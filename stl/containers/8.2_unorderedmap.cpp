//UNORDERED MAP: stores data in random order
//keys can't be duplicate here.
//General usability: Unordered map > Map > Multi map
//Biggest difference between MAP and Unordered map is that: in MAP time complexity for (insert, erase, count) is O(log n) while unordered_map has O(1)=constant and rarely O(n).
 {

unordered_map<string, int> m;

//CANNOT USE SQUARE BRACKETS UNLIKE MAPS❌
// m["TV"] = 10000;
// m["AC"] = 25000;
// m["Tablet"] = 5000;
// m["Heater"] = 2300;

//No duplicate keys in unordered map❌
//to insert either emplace or insert
// m.emplace("tv", 100);
// m.emplace("tv", 100);
// m.emplace("tv", 100);
// m.emplace("tv", 100);

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
