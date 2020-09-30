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
        string s;
        ll a[n][n];
        for(ll i = 0; i < n; i++) {
            cin >> s;
            for(ll j = 0; j < n; j++) {
                a[i][j] = s[j] - '0';
            }
        }
        bool poss = true;
        for(ll i = 0; i < n; i++) {
            for(ll j = 0; j < n; j++) {
                if(a[i][j] == 1 && ((i != n-1 && a[i+1][j] != 1) && (j != n-1 && a[i][j+1] != 1))) {
                    poss = false;
                    break;
                }
                if(!poss)
                    break;
            }
        }
        if(poss) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
    return 0;
}