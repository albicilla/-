#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

#define MAX_N 15
#define INF 1e9
int n;
int d[MAX_N][MAX_N];

int dp[1<<MAX_N][MAX_N];

int rec(int S,int v){
	if(dp[S][v]>=0){
		return dp[S][v];
	}
	if(S==(1<<n)-1&&v==0){
		return dp[S][v]=0;
	}
	int res=1e9;
	for(int u=0;u<n;u++){
		if(!(S>>u & 1)){
			res=min(res,rec(S | 1<<u,u)+d[v][u]);
		}
	}
	return dp[S][v]=res;
}

void solve(){
	memset(dp,-1,sizeof(dp));
	for(int S=0;S<1<<n;S++){
		fill(dp[S],dp[S]+n,INF);
	}
	dp[(1<<n)-1][0]=0;

	for(int S=(1<<n)-2;S>=0;S--){
		for(int v=0;v<n;v++){
			for(int u=0;u<n;u++){
				if(!(S>>u & 1)){
					dp[S][v] = min(dp[S][v], dp[S | 1<<u][u] + d[v][u]);
				}
			}
		}
	}
	printf("%d\n",dp[0][0]);

}
int main(){
	cin>>n;
	solve();

}