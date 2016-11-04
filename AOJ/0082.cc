#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>
using namespace std;

inline bool cheak(int x, int y, int xMax, int yMax) { return x >= 0 && y >= 0 && xMax > x && yMax > y; }
// inline int toInt(string s) { int v; istringstream sin(s); sin >> v; return v; }
// template<class T> inline string toString(T x) { ostringstream sout; sout << x; return sout.str(); }
// template<class T> inline T sqr(T x) { return x*x; }

// int a[10];
// vector<int> memo;

// int bekijo(int a,int n){
// 	return n? bekijo(a,n-1)*a:1;
// }
// int main(){
// 	int b[16]={1,2,1,2,1,4,1,4,1,2,1,2,1,4,1,4};
// 	while(cin>>a[0]>>a[1]>>a[2]>>a[3]>>a[4]>>a[5]>>a[6]>>a[7]){
// 		int res=100;
// 		memo.clear();
// 		for(int i=0;i<8;i++){
// 			int p=0;
// 			for(int j=i;j<i+8;j++){
// 				if((a[j-i]-b[j])<0)continue;
// 				p+=a[j-i]-b[j];
// 				// cout<<"j="<<j<<" i="<<i<<endl;
// 				// cout<<"a[j-i]-b[j]="<<a[j-i]-b[j]<<endl;
// 			}

// 			// cout<<"p="<<p<<"res= "<<res<<endl;
// 			int temp=res;
// 			res=min(p,res);
// 			if(temp>=res){
// 				memo.push_back(i);
// 				// cout<<"Changed!!"<<endl;
// 			}
// 		}

// 		for(int i=0;i<memo.size();i++){
// 			for(int j=memo[i];j<memo[i]+8;j++){
// 				bekijo(10,8-(j-memo[i]));
// 			}
// 		}
// 		// for(int i=memo;i<memo+8;i++){
// 		// 	cout<<b[i];
// 		// 	if(i<memo+7)cout<<" ";
// 		// }
// 		cout<<endl;

// 		// cout<<"res="<<res<<endl;
// 		// cout<<"memo="<<memo<<endl;
// 	}
// }