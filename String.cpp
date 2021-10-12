//string.cpp
#include<iostream>
#include<cstring>
using namespace std;
#define pb push_back

int main() {

	string s;
	//Initialisation
	string s1 = "Hello";
	string s2("Zello");
	char a[] = "Varun Yadav";
	string s3(a);

	cout<<s1<<endl;
	cout<<s2<<endl;
	cout<<s3<<endl;

	s3.pb('!'); // we can perform push_back and pop_back func in string.
	cout<<s3<<endl;

	if(s1.compare(s2)==0){ //compare fun gives 0 is both string are equal 
		cout<<s1<<" is equals to "<<s2<<endl;
	}
	if(s1<s2){
		cout<<"Yes"<<endl;
	}

	string x = "Hello my name is Varun";
	int indx = x.find("Varun"); // find func , it give the index 
	cout << indx << endl;

	// substr function
	string y = x.substr(6,2); //from which index , and how many char you want 
	cout<<y<<endl;

	for(auto ch :x){  // for each loop 
		cout<<ch<<" ";
	}
	cout<<endl;
	 
	for(auto it = x.begin(); it != x.end(); it++){
		cout<<*it<<" ";
	}
	cout<<endl;

	return 0;
}