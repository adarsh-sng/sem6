#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() 
{
 int k;cin>>k;
 int sq = k*k;  //2025
 int n = to_string(sq).size();
 int m = to_string(k).size();
// cout<<n<<" "<<m<<endl;
for (int i = 1; i < n; i++)
{
    int pow10 = pow(10, i);
    int r = sq % pow10;
    int l = sq / pow10;
    // cout << r << " " << l << endl;
    if (r + l == k && r != 0) {
        cout << "YES" << endl;
        return;
    }
}
cout<<"NO"<<endl;
}
signed main() {
    fast
    int tc = 1;
    // cin >> tc;
    while(tc--) {
        solve();
    }
    return 0;
}