#include <iostream>
#include <cstring>
using namespace std;

long long dp[100010];
long long pd[100010];
bool used[100010];

const long long mod=1e9+9;
int main(){
	int m;
	cin>>m;
	while(m--){
		memset(dp,0,sizeof(dp));
		memset(pd,0,sizeof(pd));
		long long a;
		cin>>a;
		dp[0]=1;
		dp[1]=2;
		dp[2]=3;
		dp[3]=5;
		pd[0]=1;
		pd[1]=2;
		pd[2]=4;
		pd[3]=8;
		for(int i=4;i<a;i++){
			dp[i]=(dp[i-1]+dp[i-2])%mod;
			//pd[i]=(pd[i-1]+pd[i-2]+pd[i-3]+pd[i-4])%mod;
		}
		cout<<(dp[a-1]*pd[a-1])%mod<<endl;
	}
	return 0;
}