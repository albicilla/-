#include <cstdio>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstring>

using namespace std;



//120<=M<=300
//1<=T<=50
//1<=P<=10
//0<=R<=2000
/*
M コンテストの始まりから終わりまでの時間
T チーム数
P 問題数
R 提出記録の数
*/
int main(){
	while(1){
		int M,T,P,R;
		vector < pair<pair<int,int>,int > > v;

		scanf("%d%d%d%d",&M,&T,&P,&R);
		//cout<<M<<" "<<T<<" "<<P<<" "<<R<<endl;
		if(M==0&&T==0&&P==0&&R==0){
			break;
		}



		//不正解は回数も考える
		int wa[51][51];

		//pen ペナルティ
		int pen[51];

		memset(wa,0,sizeof(wa));
		memset(pen,0,sizeof(pen));


		
		//入力
		//m 経過時間
		//t チーム番号
		//p 問題番号
		//j 判定結果
		int m,t,p,j;

		//num[t] チームの正解数
		int num[51];
		memset(num,0,sizeof(num));

		for(int i=0;i<R;i++){
			cin>>m>>t>>p>>j;
			if(j==1){
				wa[t][p]++;
				
			}else if(j==0){
				pen[t]+=m;
				pen[t]+=wa[t][p]*20;
				num[t]++;
				
			}
		}

		// for(int i=1;i<=10;i++){g++ 
		// 	cout<<"49="<<wa[49][i]<<"6="<<wa[6][i]<<endl;
		// }

		// for(int i=1;i<=T;i++){
		// 	v.push_back(make_pair(-num[i],make_pair(pen[i],-i)));
		// }
		for(int i=1;i<=T;i++){
			v.push_back(make_pair(make_pair(-num[i],pen[i]),-i));
		}


		sort(v.begin(),v.end());
		 cout<<-v[0].second<<"num= "<<-v[0].first.first<<"pen= "<<v[0].first.second<<endl;
		// cout<<-v[1].second.second<<"num= "<<-v[1].first<<"pen= "<<v[1].second.first<<endl;
		


		for(int i=0;i<T-1;i++){
			char a;
			if(v[i].first==v[i+1].first)a='=';
			else a=',';
			cout<<-v[i].second<<a;
		}
		cout<<-v[T-1].second<<endl;
		
	}
	return 0;
}