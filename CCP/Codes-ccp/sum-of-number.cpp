#include <bits/stdc++.h>
using namespace std;
#define int long long
#define endl '\n'
#define fast ios::sync_with_stdio(false); cin.tie(nullptr);
void solve() 
{
 int m,n;cin>>m>>n;
 for (int i = m; i <= n; i++){
    int sum = (i%10)+(i/10);
    int mul = (i%10)*(i/10);
    if(sum+mul==i){
        cout<<i<<endl;
    }
 }
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