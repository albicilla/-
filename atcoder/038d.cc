#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>

using namespace std;
int a,b;
int dp[100010];
int main(){
	int n;
	cin>>n;
	vector <pair<int,int> > vec;
	for(int i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		vec.push_back(make_pair(a,b));
	}
	sort(vec.begin(),vec.end());

	int res=0;
	for(int i=0;i<n;i++){
		dp[i]=1;
		for(int j=0;j<i;j++){
			if(vec[j].first<vec[i].first&&vec[j].second<vec[i].second){
				dp[i]=max(dp[i],dp[j]+1);
			}
			
		}
		res=max(res,dp[i]);
		
	}
	printf("%d\n",res);
}