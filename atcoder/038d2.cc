#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

struct segtree{
	int n;
	vector<int> d;
	segtree(int mx){
		n = 1;
		while(n<mx)n<<=1;
		d = vector<int>(n<<1);
	}
	int getmax(int a,int b,int i=1,int l=0,int r=-1){
		if(r==-1)r=n;
		if(a<=l&&r<=b)return d[i];
		int res=0;
		int c=(l+r)>>1;
		if(a < c)
	}
};

int main(){
	int n;
	scanf("%d",&n);
	vector<pair<int,int>> a(n);

	for(int i=0;i<n;i++){
		scanf("%d%d",&a[i].first,&a[i].second);
		a[i].second *= -1
	}
	sort(a.begin(),a.end());
	segtree t(100005);
	for(int i=0;i<n;i++){
		int h=a[i].second;
		int now=t.getmax(0,h)+1;
		ans = max(ans,now);
		t.add(h,now);
	}
	cout<<ans<<endl;
	return 0;
}