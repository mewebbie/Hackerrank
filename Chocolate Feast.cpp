#include <bits/stdc++.h>

using namespace std;

// Complete the chocolateFeast function below.
int chocolateFeast(int n, int c, int m) {
    int choc=n/c;
    int n_wrap=choc,st;
    while(n_wrap>=m){
        st=choc;
        choc+=n_wrap/m;
        n_wrap=(n_wrap-(choc-st)*m)+n_wrap/m;;
        
    }
    return choc;
}

int main()
{
    int n,c,m,t;
    cin >> t;
    while(t--){
        cin >> n >> c >> m;
        cout << chocolateFeast(n,c,m) << endl;
    }
    return 0;
}
