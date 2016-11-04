#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int h,m,s;
	while(1){
		cin>>h>>m>>s;
		if(h==-1&&m==-1&&s==-1)break;
		int t=2*3600 - h* 3600-m*60-s;
		printf("%02d:%02d:%02d\n",t/3600,(t%3600)/60,t%60);
		t*=3;
		printf("%02d:%02d:%02d\n",t/3600,(t%3600)/60,t%60);
	}
	return 0;
}