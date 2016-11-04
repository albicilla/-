#include <iostream>
#include <algorithm>

using namespace std;

pair<int,int> PD[10010];

int main(){
	int n,m;
	while(1){
		cin>>n>>m;
		if(n==0&&m==0)break;
		int d,p;

		for(int i=0;i<n;i++){
			cin>>d>>p;
			PD[i]=make_pair(p,d);
		}
		sort(PD,PD+n);
		reverse(PD,PD+n);

		int s=0;
		for(int i=0;i<n;i++)s+=PD[i].first*PD[i].second;

		for(int i=0;i<n;i++){
			if(m<=0)break;

			int g=min(m,PD[i].second);
			s-=PD[i].first*g;
			m-=g;
		}
		cout<<s<<endl;
	}
}