#include <iostream>

using namespace std;
using ll = long long;
int n, q;
ll a[10000002], b[10000002];
void tt() {
    a[0] = b[0] = 0;
    for(int i = 1; i <= n; i++) {
        b[i] = b[i-1] + a[i];
    }
}
int main() {
    freopen("QSUM.INP", "r", stdin);
    freopen("QSUM.OUT", "w", stdout);
    cin>>n>>q;
    for(int i = 1; i <= n; i++) cin>>a[i];
    tt();
    for(int i = 0; i <= n; i++) cout<<b[i]<<" ";
    cout<<endl;
    for(int i = 0; i < q; i++) {
        int x, y; cin>>x>>y;
        cout<<b[y] - b[x-1]<<endl;
    }
    return 0;
}
