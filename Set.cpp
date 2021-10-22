#include<iostream>
#include<set>
using namespace std;

int main() {

	set<int> s; // output will be sorted , set does not take duplicate value
	s.insert(1);
	s.insert(2);
	s.insert(3);
	s.insert(4);
	s.insert(4);
	s.insert(4);

	//Erase in set can be done via value or iterator 

	auto it = s.begin(); // via iterator
	s.erase(it);

	s.erase(2); // via value

	auto ans = s.find(3);

	if(ans != s.end()){
		cout<<"Found"<< *ans<<endl; // derefer is must
	}
	else{
		cout<<"Not Found";
	}

	//set<int> :: iterator  , in this way we can make our iterator
	for(auto it = s.begin(); it!= s.end(); it++){
		cout<< *it<<endl;
	}

	return 0;
}