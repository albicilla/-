#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

string t;
int cnt[30];
int temp;
int hai[30];


int main(){
	cin>>t;
	
	for(int i=0;i<(int)t.size();i++){
		for(int j='a';j<='z';j++){
			if(t[i]==j)
				cnt[j-'a']++;
		}
	}
	int h=0;
	for(int i=0;i<26;i++){
		if(cnt[i]%2==0){
            temp+=cnt[i];
        }
		else {
            temp+=(cnt[i]-1);
             h++;  
		}

	}
	//h=0は例外
	if(h==0)cout<<temp<<endl;
	//一文字で作る
	if(temp/h==0){
        cout<<1<<endl;
        return 0;
    }
	//hがグループ数
	//２ずつ振り分けてく
	//tmp/2がわけ
	//その最小値は(temp)/h - 1 ＋１
	if((temp/h)%2==0)
		cout<<(temp/h)+1<<endl;
	else
		cout<<(temp)/h<<endl;
}