//Codechef: mohilllll Codeforces: mohilkhare Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>
#define vpll vector<pair<long long int, long long int>>
#define sll set<long long int>
#define mp make_pair
#define pb push_back
#define endl "\n"
#define here std::cout << "here\n";
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
 
using namespace std;
 
int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n; cin >> n;
        ll a[n+1], ans;
        bool keeper[1025];
        memset(keeper, false, sizeof(keeper));
        for(ll i = 1; i <= n; i++) {
            cin >> a[i];
            keeper[a[i]] = true;
        }
        //here;
        for(ll i = 1; i < 1024; i++) {
            bool ok = true;
            for(ll j = 1; j <= n; j++) {
                if(!keeper[a[j] ^ i]) {
                    ans = -1;
                    ok = false;
                    break;
                }
            }
            if(ok) {
                ans = i;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}