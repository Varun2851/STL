#include<iostream>
#include <map>
using namespace std;
#define mp make_pair
typedef multimap<char,string> :: iterator IT; 

int main(){

	multimap<char,string>m; // it give output in sorted order , log n complixity
	m.insert(mp('k',"kartik"));
	m.insert(mp('k',"kunal"));
	m.insert(mp('k',"kritik"));
	m.insert(mp('k',"kunal"));
	m.insert(mp('k',"karan"));
	m.insert(mp('a',"ayush"));
	m.insert(mp('r',"ritik"));

    m.insert({'k',"katik"}); // we can insert in this way also

 //    multimap<char,string> :: iterator it; // in this way we can set our iterator to our multimap
 //    it = m.begin();
	// m.erase(it);      we use iterator to iterate in map , list , hashmap , multimap etc.

	IT lb = m.lower_bound('k'); // >=key
	IT up = m.upper_bound('k');//  > key

	// cout<< (*lb).first<<endl;
	// cout<< (*lb).second<<endl;
 //    cout<< (*up).first <<endl;
 //    cout<< (*up).second<<endl;

	// for(auto node : m){
	// 	cout<<node.first<<"-->"<<node.second<<endl;
	// }

	// Print all the values where key is k

	for(auto it = lb; it!= up; it++ ){
		cout<<(*it).second<<endl;
	}

	return 0;
}