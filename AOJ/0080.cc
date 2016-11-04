#include <iostream>
#include <iomanip>
#include <cstdio>
#include <cmath>
using namespace std;

double Fanc(double t,double q){
	return t*t*t-q;
}
double fanc(double t){
	return 3*t*t;
}
int main(){
	double q;
	
	while(1){
		cin>>q;
		if(q==-1)break;
		double x=q/2;
		while(1){
			//cout<<"x*x*x-q="<<x*x*x-q<<endl;
			//cout<<"0.00001*q="<<0.00001*q<<endl;
			if(Fanc(x,q)<0.00001*q)break;
			x=x-Fanc(x,q)/fanc(x);
		}
		cout<<fixed<<setprecision(9)<<x<<endl;
	}
}