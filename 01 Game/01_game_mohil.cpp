//Codechef: mohilllll Codeforces: mohilllll Google: mohilkhare17
//headers
#include <bits/stdc++.h>
#include <assert.h>
//shorts
#define ll long long int
#define vll vector<long long int>
#define vvll vector<vector<long long int>>
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
        string s; cin >> s;
        bool ok = false;
        ll moves = 0;
        while(!ok) {
            ok = true;
            ll alts = 0;
            string temp = "";
            for(ll i = 0; i < s.length(); i++) {
                //cout << i << endl;
                if((i != s.length()-1) && ((s[i] == '1' && s[i+1] == '0') || (s[i] == '0' && s[i+1] == '1'))) {
                    //here;
                    moves++;
                    ok = false;
                    i++;
                }
                else {
                    //cout << "\t" << s[i] << endl;
                    temp += s[i];
                }
                //cout << temp << endl;
            }
            //cout << temp << " " << moves << endl;
            //cout << moves << endl;
            s = temp;
        }
        //cout << moves << endl;
        if(moves % 2 == 0) 
            cout << "NET" << endl;
        else cout << "DA" << endl;
    }
    return 0;
}