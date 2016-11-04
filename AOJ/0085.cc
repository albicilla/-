#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

using namespace std;

int dp[1001];

int main(){
	int n,m;
	while(1){
		cin>>n>>m;
		if(n==0&&m==0)break;
		dp[1]=0;
		for(int i=2;i<=n;i++){
			dp[i]=(dp[i-1]+m)%i;
		}
		cout<<dp[n]+1<<endl;

		//cout << endl;

		for(int i=0;i<=n;i++){
			//cout<<"dp["<<i<<"]+1= "<<dp[i]+1<<endl;
		}
		
	}
	return 0;
}