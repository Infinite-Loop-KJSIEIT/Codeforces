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
        ll n, k; cin >> n >> k;
        ll ans = LLONG_MAX;
        if(k >= n) 
            ans = 1;
        else {
            for(ll i = 1; i <= sqrt(n) && i <= k; i++) {
                if(n % i == 0) {
                    ans = min(ans, n/i);
                    if(n/i <= k)
                        ans = min(ans, i);
                }
            }
        }
        cout << ans << endl;
    }
    return 0;
}