// string2D
#include<iostream>
#include<cstring>
#include<algorithm>
#include<vector>
using namespace std;

bool comparator(string a , string b){
	if(a.length() == b.length()){
		return a < b;
	}
	return a.length() > b.length();
}
int main() {

	vector<string> a = {"Hello","Pineapple","Guava","Apple"}; 
	sort(a.begin(),a.end(),comparator);

	for(int i = 0; i<4; i++){
		cout<<a[i]<<" ";
	}
	return 0; 
}