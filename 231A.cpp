#include <bits/stdc++.h>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(nullptr);
#define int long long

int32_t main() {
    fastio;
    
    int count = 0;
    int t; cin >> t;
    while(t--) {
        int a, b ,c;
        cin >> a >> b >>c ;
        if(a+b+c >= 2){
            count++;
        }
    }
    cout << count << endl;
    return 0;
}