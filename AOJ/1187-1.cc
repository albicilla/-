#include <iostream>
#include <cstring>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	while(1){
		int M,T,P,R;
		cin>>M>>T>>P>>R;
		if(M==0&&T==0&&P==0&&R==0)break;

		int m,t,p,j;
		pair< pair<int ,int>,int > b[51];
		int a[51][11];
		
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		
		for(int i=0;i<T;i++)b[i].second=-i-1;
		for(int i=0;i<R;i++){
			cin>>m>>t>>p>>j;
			t--;p--;
			if(j)a[t][p]++;
			else {
				b[t].first.second+=m+a[t][p]*20;
				b[t].first.first--;
			}
		}

		sort(b,b+T);
		for(int i=0;i<T;i++){
			if(i){
				if(b[i-1].first==b[i].first)cout<<'=';
				else cout<<',';
			}
			cout<<-b[i].second;
		}
		cout<<endl;

	}
	return 0;
}