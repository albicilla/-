#include <iostream>
#include <algorithm>
using namespace std;

char maze[110][110];
bool used[110][110];

int move(int x,int y){
	if(used[x][y]==true)return 1;
	used[x][y]=true;
	if(maze[x][y]=='.'){
		cout<<x<<" "<<y<<endl;
		return 0;
	}
	if(maze[x][y]=='>'){
		x++;
	}
	if(maze[x][y]=='<'){
		x--;
	}
	if(maze[x][y]=='^'){
		y--;
	}
	if(maze[x][y]=='v'){
		y++;
	}
	//cout<<"x"<<x<<"y"<<y<<endl;
	move(x,y);
}
int main(){
	int h, w;
	while(1){
			cin>>h>>w;
			if(h==0&&w==0)return 0;
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				cin>>maze[j][i];
			}
		}
		for(int i=0;i<110;i++){
			for(int j=0;j<110;j++){
				used[j][i]=false;
			}
		}
		int x=0,y=0;
		if(move(x,y)==1)cout<<"LOOP"<<endl;
	}
}
