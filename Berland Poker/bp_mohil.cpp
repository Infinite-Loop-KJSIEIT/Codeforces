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
#define here std::cout << "here" << endl;
#define fastIO ios_base::sync_with_stdio(false); cin.tie(NULL);
#define MOD 1000000007
//program specific shorts (if any)
 
using namespace std;
 
int main() {
    fastIO;
    ll t; cin >> t;
    for(ll q = 0; q < t; q++) {
        ll n, m, k; cin >> n >> m >> k;
        if(m == 0) {
            cout << "0" << endl;
            continue;
        }
        ll p = n/k;
        if(m <= p) {
            cout << m << endl;
            continue;
        }
        else if(m > p) {
            ll rem = m-p;
            if(rem != 0 && rem / (k-1) == 0) {
                cout << p - 1 << endl;
                continue;
            }
            else if(rem >= p*(k-1)) {
                cout << "0" << endl;
                continue;
            }
            ll dist;
            if(rem % (k-1) == 0)
                dist = rem / (k-1);
            else 
                dist = (rem / (k-1)) + 1;
            cout << p - dist << endl;
        } 
    }
    return 0;
}