#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cmath>

using namespace std;

int n;
int k;
double l[10010];

int f(double x){
	int ans=0;
	for(int i=0;i<n;i++){
		ans+=(int)(l[i]/x);
	}
	return ans;
}

int main(){
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>l[i];
	}
	double lb=0.0,rb=1e9;

	for(int i=0;i<100;i++){
		double mid=(rb+lb)/2;
		if(f(mid)>=k){
			lb=mid;
		}else{
			rb=mid;
		}
	}
	printf("%.2f\n",floor(rb*100)/100);
}