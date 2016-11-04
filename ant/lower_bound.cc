#include <iostream>
#include <algorithm>

using namespace std;

int n,k;
int a[1000010];

void solve(){
	int lb=-1,ub=n;
	while(ub-lb>1){
		int mid=(lb+ub)/2;
		if(a[mid]>=k){
			ub=mid;
		}else{
			lb=mid;
		}
	}
	printf("%d\n",ub);
}

int main(){
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>k;
	solve();
}
