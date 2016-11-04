#include <iostream>
#include <cstdio>
#include <algorithm>

using namespace std;


int h1,w1,h2,w2;

int main(){
	cin>>h1>>w1>>h2>>w2;
	if(h1==h2){
		cout<<"YES"<<endl;
		return 0;
	}
	if(h1==w2){
		cout<<"YES"<<endl;
		return 0;
	}
	if(w1==h2){
		cout<<"YES"<<endl;
		return 0;

	}
	if(w1==w2){
		cout<<"YES"<<endl;
		return 0;
	}
	cout<<"NO"<<endl;
	return 0;


}