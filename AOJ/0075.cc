#include <iostream>
#include <cstdio>
using namespace std;
int main(){
	int a;
	double b,c;
	int cnt=0;
	while(~scanf("%d,%lf,%lf",&a,&b,&c)){
		if(b>=25*c*c){
			printf("%d\n",a);
			cnt++;
		}
	}
	if(cnt==0){
		puts("該当なし");
	}
	return 0;
}