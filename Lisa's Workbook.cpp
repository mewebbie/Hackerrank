#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int j,spl=0,i,page=1,arr[n+1];

    for(i=1;i<=n;i++) cin >> arr[i];
    for(i=1;i<=n;i++){
        for(j=1;j<=arr[i];j++){
            if(j==page) spl+=1; 
            if(j%k==0 && j/k>0) {
                if(j!=arr[i]) page+=1;
            }
        }
        page+=1;
    }
    cout << spl;
    return 0;
}
