#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i,n,d,j,k,ret=0;;
    cin >> n >> d;
    vector<int> arr;
    int temp;
    for(i=0;i<n;i++) {
        cin >> temp;
        arr.push_back(temp);
    }
    int y;
    for(i=0;i<n-2;i++){
        for(j=i+1;j<n-1;j++){
            if(arr[j]-arr[i]!=d) continue;
            for(k=j+1;k<n;k++){
                if(arr[j]-arr[i]==arr[k]-arr[j]) ret+=1;
            }
        }
    }
    cout << ret;
    return 0;
}
