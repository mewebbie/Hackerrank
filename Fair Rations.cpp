#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the fairRations function below.
int fairRations(vector<int> B,int n) {
    int loaves=0,i=0;
    for(i=0;i<n-1;i++){
        if(B[i]%2){
            loaves+=2;
            B[i+1]++;
        }
    }
    if(B[n-1]%2) cout << "NO";
    else cout << loaves;
    return 0;

}

int main()
{
    int i,n;
    cin >> n;
    if(n==2){
        cout << "NO";
        return 0;
    }
    vector<int>b;
    for(i=0;i<n;i++) {
        int input;
        cin >> input;
        b.push_back(input);
    }
    int res = fairRations(b,n);
    return 0;
}