#include <bits/stdc++.h>
#include <vector>
#include <string>

using namespace std;

/*
 * Complete the 'biggerIsGreater' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING w as parameter.
 */

string biggerIsGreater(string w) {
    string substr="";
    char c, tempc;
    int gpos=0;
    bool flag = false;
    for(int i=w.size()-1;i>0;i--) {
        if(!flag && w[i]<=w[i-1]) {
            substr.push_back(w[i]);
        }
        else {
            if(i==1 && w[0]>=w[1]);
            else {
                substr.push_back(w[i]);
                c = w[i-1];
                for(int j=0;j<substr.size();j++) {
                    if(substr[j]>c) {
                        gpos = j;
                        break;
                    }
                }
                
                tempc = w[i-1];
                w[i-1] = substr[gpos];
                substr[gpos] = tempc;
                return w.substr(0,i).append(substr);
            }
            flag = true;
            break;
        }
    }
    return "no answer";
}

int main()
{
    int T;
    string str;
    cin >> T;
    while(T--) {
        cin >> str;
        cout << biggerIsGreater(str) << '\n';
    }
    return 0;
}