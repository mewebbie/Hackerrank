#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t,n,m,s;
    cin >> t;
    while(t--){
        cin >> n >> m >> s;
        if(m>n-s+1){
            m-=n-s+1;
            if(m%n==0) cout << n << endl;
            else cout << m%n << endl;
        }
        else cout << s+m-1 << endl;
    }
    return 0;
}