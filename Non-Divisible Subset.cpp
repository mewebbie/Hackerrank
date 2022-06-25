#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;                      // input line 2
    
    int arr[n]; 
    for(int i=0;i<n;i++) cin >> arr[i]; // input line 1
    
    vector<int> sarr[n-1];
    
    /*for(int i=0;i<n-1;i++) {
        for(int j=i+1;j<n;j++) {
            cout << arr[i] << '+' << arr[j] << '=' << arr[i]+arr[j] << '\n';
        }
    }*/
    
    bool add;
    int size=1;
    for(int i=0;i<n-1;i++) {
        sarr[i].push_back(arr[i]);
        for(int j=0;j<n;j++) {
            add = true;
            if(j==i) continue;
            if((arr[i]+arr[j])%k) {
                for(int x=1;x<sarr[i].size();x++) {
                    if(!((arr[j]+sarr[i][x])%k)) add = false;
                }
                
                if(add) sarr[i].insert(sarr[i].end(),arr[j]);
            }
        }
        if(sarr[i].size() > size) size = sarr[i].size();
    }
    
    cout << size << endl;
    /*for(int i=0;i<n-1;i++) {
        for(int j=0;j<sarr[i].size();j++) cout << sarr[i][j] << ' ';
        cout << '\n';
    }*/
    return 0;
}