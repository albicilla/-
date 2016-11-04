#include <iostream>

using namespace std;

int main(){
	int a=10;
	while(a>1){
		a--;
		cout<<"a="<<a<<endl;
	}
	cout<<"以下break構文"<<endl;
	a=10;
	while(1){
		a--;
		if(a==0)break;
		cout<<"a="<<a<<endl;
	}
	return 0;
}