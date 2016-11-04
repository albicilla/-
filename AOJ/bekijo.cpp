#include <iostream>
using namespace std;

//aのb乗
int bekijo(int a,int n){
	return n? bekijo(a,n-1)*a:1;
}
int main(){
	int a,b;
	cin>>a>>b;
	cout<<bekijo(a,b)<<endl;

}