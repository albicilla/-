#include <iostream>
#include <algorithm>

using namespace std;

int check(int n,int m){
	int x=n*m;
	while(x>n)x=(m*(x-n)-1/(m-1));
	return x;
}
int main(){
	int n,m;
	while(1){
		cin>>n>>m;
		if(n==0&&m==0)break;
		cout<<check(n,m)<<endl;
	}

}