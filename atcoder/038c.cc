#include <iostream>
#include <cstdio>
#include <algorithm>
#include <vector>

using namespace std;

int a[100010];
int b[100010];

int fib_memo[10000] = {0};
int fib(int n) {
    if(n==0)return 0;
    if(n==1)return 1;
    if(fib_memo[n] != 0) {
        return fib_memo[n];
    }
    return fib_memo[n] = fib(n-1)+fib(n-2);
}

int main(){
	
	int n;
	scanf("%d",&n);
	int res=0;
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n-1;i++){
		if(a[i]<a[i+1])b[i]++;
	}
	for(int i=0;i<n;i++)cout<<i<<" "<<b[i]<<endl;
	for(int i=0;i<n;i++){
		if(b[i]>=1)b[i+1]+=b[i];
		if(b[i]==0){
			res+=fib(b[i-1]);
		}
		if(i==n-2&&b[i]>0){
			res+=fib(b[i]);
		}
	}
	int ans=(res+n); 
	cout<<"res="<<res<<endl;
	for(int i=0;i<n;i++)cout<<i<<" "<<b[i]<<endl;
	printf("%d\n",ans);
	
	
	return 0;

}