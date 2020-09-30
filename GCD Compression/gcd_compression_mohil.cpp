#include <bits/stdc++.h>
#define ll long long int
using namespace std;
 
int main() {
    ll t; cin >> t;
    for(ll qq = 0; qq < t; qq++) {
        ll n, ele; cin >> n;
        vector<ll> even, odd;
        for(ll i = 1; i <= 2*n; i++) {
            cin >> ele;
            if(ele % 2 == 0) even.push_back(i);
            else odd.push_back(i);
        }
        vector<pair<ll, ll>> ans;
        for(ll i = 0; i+1 < even.size(); i+=2)
            ans.push_back(make_pair(even[i], even[i+1]));
        for(ll i = 0; i+1 < odd.size(); i+=2)
            ans.push_back(make_pair(odd[i], odd[i+1]));
        for(ll i = 0; i < n-1; i++)
            cout << ans[i].first << " " << ans[i].second << endl;
    }
    return 0;
}