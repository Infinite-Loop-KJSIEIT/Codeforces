#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
    ll t; cin >> t;
    while(t--) {
        ll l = 1, r, n, res = 0; cin >> n >> r;
        if(n <= l) {cout << 1 << endl; continue;}
        if(n <= r) {r = n-1, res = 1;}
        cout << res + ((l+r)*(r-l+1)/2) << endl;
    }
}