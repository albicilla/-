#include <iostream>
#include <algorithm>
#include <stack>
#include <queue>

using namespace std;

int co(int n){
	int cnt=0;
	while(1){
		if(n==0)break;
		if(n%2==1)cnt++;
		n/=2;
		
	}
	return cnt;
}


int main(){
	int N;
	const int inf=1e9;
	cin>>N;
	queue<int> que;
	vector<int> d(N + 1, inf);
	que.push(1);
	d[1]=1;
	while(!que.empty()){
		int now = que.front();que.pop();
		if(now==N)break;

		int w=co(now);
		for(int nxt=now-w;nxt<=now+w;nxt+=2*w){
			if(nxt<1||nxt>N)continue;
			if(d[nxt]==inf){
				que.push(nxt);
				d[nxt]=d[now]+1;
			}
		}
	}
	if(d[N]==inf)cout<<"-1"<<endl;
	else cout<<d[N]<<endl;
	return 0;
}