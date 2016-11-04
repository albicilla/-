#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef pair<int,int> P;
int n;
vector<P> t;
P change(P p){
	return P(-p.second,p.first);
}
vector<P> ro(vector<P> vec){
	while(1){
		if(vec[0].first==0&&vec[0].second>0)break;
		for(int i=0;i<(int)vec.size();i++){
			vec[i]=change(vec[i]);
		}
	}
	return vec;
}

vector<P> input(){
	vector<P> res;
	int m,x[100],y[100];
	cin>>m;
	for(int i=0;i<m;i++){
		cin>>x[i]>>y[i];
		if(i==0)continue;
		res.push_back(P(x[i]-x[i-1],y[i]-y[i-1]));
	}
	return ro(res);
}

int main(){
	while(1){
		cin>>n;
		if(n==0)break;
		t.clear();
		t=input();
		for(int i=0;i<n;i++){
			vector<P> u=input();
			vector<P> v=u;
			reverse (v.begin(),v.end());
			for(int i=0;i<(int)v.size();i++){
				v[i].first*=-1;v[i].second*=-1;
			}
			v=ro(v);
			if(t==u||t==v){
				cout<<i+1<<endl;
			}
		}
		cout<<"+++++"<<endl;
	}
	return 0;
}

