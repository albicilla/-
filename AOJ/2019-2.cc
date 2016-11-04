#include <iostream>
#include <cstring>
using namespace std;

int main(){
	int n,m;
	while(1){
		cin>>n>>m;
		if(n==0&&m==0)break;

		int d[10010],p[10010],r[11];

		memset(d,0,sizeof(d));
		memset(p,0,sizeof(p));
		memset(r,0,sizeof(r));

		for(int i=0;i<n;i++){
			cin>>d[i]>>p[i];
		}
		for(int i=0;i<n;i++){
			r[p[i]]+=d[i];
		}
		for(int i=10;i>=0;i--){
			if(m>=r[i]){
				m-=r[i];
				r[i]=0;
			}else{
				r[i]-=m;
				m=0;
			}
		}
		int ans=0;
		for(int i=0;i<=10;i++){
			ans+=i*r[i];
		}
		cout<<ans<<endl;
	}
}