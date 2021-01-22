#include<iostream>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    long long value=3,time;
    if(t==1) cout << 3;
    else if(t==2) cout << 2;
    else if(t==3) cout << 1;
    
    while(t>3){
        value*=2;
        time = value-2;
        if(t>(time+value-1)) continue;
        else {
            cout << (value-(t-time));
            break;
        }
    }
    return 0;
}
