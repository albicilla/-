
#include <iostream>
#include <algorithm>

using namespace std;


int x[51];

int bit[51];

int sum(int i)
{
    int s = 0;
    while (i > 0) {
        s += bit[i];
        i -= i& -= i;
    }

    return s;
}

int main()
{
    int n, a;
    cin >> n >> a;

    long long ans = 0;

    sort(x, x + n);



    return 0;
}
