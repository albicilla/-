#include <iostream>
#include <cstdio>
#include <sstream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;

int n,m;
int x[100010];

// bool C(int d){
// 	int a=x[0];
// 	for(int i=1;i<n;i++){
// 		if((x[i]-a)>=d){
// 			m--;
// 			if(m==0)return true;
// 			a=x[i];
// 		}
// 	}
// 	return false;
// }

bool C(int d){
	int last=0;
	for(int i=1;i<m;i++){
		int crt=last+1;
		while(crt<n&&x[crt]-x[last]<d){
			crt++;
		}
		if(crt==n)return false;
		last=crt;
	}
	return true;
}
int main(){
	//ifstream data("cows.in");
	cin>>n>>m;
	//m--; あり本のやり方だと入らない
	int memo=m;
	for(int i=0;i<n;i++){
		cin>>x[i];
	}
	sort(x,x+n);
	//間隔d
	//int d=1;
	int ub=1e9,lb=1;

	for(int i=0;i<100;i++){
		m=memo;
		int d=(ub+lb)/2;
		if(C(d))lb=d;
		else ub=d;
		//cout<<"lb="<<lb<<" ub="<<ub<<" m="<<m<<endl;
	}

	cout<<lb<<endl;
	return 0;
}