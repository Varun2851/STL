//Map.cpp
#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int main() {
	
	//map<string,int>m; // output will not be sorted 
	unordered_map<string,int>m; // output will not be sorted
	m.insert({"Varun",20102096});

	pair<string,int>p("Pineapple",190);
	m.insert(p);

	p = make_pair("Apple",180);
	m.insert(p);

	for(pair<string,int> p:m){
		cout<<p.first<<"-->"<<p.second<<endl;
	}

	return 0;
} 