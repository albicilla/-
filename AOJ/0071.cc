

#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>
using namespace std;

#define debug(X) cout<<"["<<#X<<"]"<<X<<endl;
int n,x,y;
char maze[10][10];

const int bombx[12]={1,2,3,0,0,0,-1,-2,-3,0,0,0};
const int bomby[12]={0,0,0,1,2,3,0,0,0,-1,-2,-3};
typedef pair<int,int> PII;

queue<PII> P;

void more_explosion(int x,int y){
	maze[x][y]='0';
	//もし爆発経路に新しい爆弾があったなら
	for(int i=0;i<12;i++){
			//爆弾があり、mazeの範囲内
			if(maze[x+bombx[i]][y+bomby[i]]=='1'&&0<=x+bombx[i]&&x+bombx[i]<8&&0<=y+bomby[i]&&y+bomby[i]<8){
				//Pに追加
				P.push(PII(x+bombx[i],y+bomby[i]));
				
				//さら地にする
				maze[x+bombx[i]][y+bomby[i]]='0';
			}

	}
	
}
int main(){
	//データセットに対するくり返し
	int n;
	cin>>n;
	for(int p=1;p<=n;p++){
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cin>>maze[j][i];
			}
		}
		cin>>x>>y;
		x--;y--;
		maze[x][y]='0';

		//debug(x);
		//debug(y);

		
			more_explosion(x,y);
			//debug(P.size());
			while(!P.empty()){
				x=P.front().first;
				y=P.front().second;
				//debug(P.size());
				//現在地の爆弾を除く
				P.pop();

				more_explosion(x,y);
			}
			//debug(P.size());
		cout<<"Data "<<p<<":"<<endl;
		
		for(int i=0;i<8;i++){
			for(int j=0;j<8;j++){
				cout<<maze[j][i];
			}
			cout<<endl;
		}
		
	}
}