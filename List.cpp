//List.cpp
#include<iostream>
#include<list>
using namespace std;

int main() {
	//list<int>l;

	list<int>l{1,2,3,4,5,6,-1,0,-190};

	l.sort(); // sort the element

	auto it = l.begin(); // it will insert element in begin
	it++; // this will add to 2nd position 
	it++; // this will add to 3rd position 
	l.insert(it,5);  

	for(auto ele: l){
		cout<<ele<<" ";
	}

	for(auto it = l.begin(); it!= l.end(); it++){
		cout << *it <<endl;
	}
	
	return 0;
}