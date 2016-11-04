#include <iostream>
#include <algorithm>
#include <cstring>

using namespace std;

int a[13]={1,2,5,10,20,50,100,200,500,1000,2000,5000,10000};
int b[13];
int main(){
	int m;
	cin>>m;
	while(m--){
		memset(b,0,sizeof(b));
		int e,c;
		cin>>e>>c;
		int total=e*100+c;
		for(int i=12;i>=0;i--){
			while(1){
				if(total-a[i]<0)break;
				total-=a[i];
				b[i]++;
			}
		}
		for(int i=0;i<=11;i++){
			cout<<b[i]<<" ";
		}
		cout<<b[12];
		cout<<endl;
	}

	return 0;
}