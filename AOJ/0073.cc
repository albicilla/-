#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
double x,h;
int main(){
	while(cin>>x,x){
		cin>>h;
		x/=2;
		double rh=sqrt(x*x+h*h);
		cout<<fixed<<setprecision(10)<<4*rh*x+x*x*4<<endl;
	}


}