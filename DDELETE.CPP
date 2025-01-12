#include <iostream>
#include <set>
using namespace std;
int dc(int n) {
    if(n <= 1) return 0;
    int c = 0;
    for(int i = 1; i < n; i++) {
        for(int j = i + 1; j <= n; j++) {
            ++c;
        }
    }
    return c;
}
int main() {
    //n = 1 + 2 + 3+ ... + 2 + 3 + ... + 3 + 4 + ... n-1 + n
    freopen("DDELETE.INP", "r", stdin);
    freopen("DDELETE.OUT", "w", stdout);
    int n; cin>>n;
    int a[n], chan = 0, le = 0;
    for(int i = 0; i < n; i++) {
        cin>>a[i];
        if(a[i] % 2 == 0) ++chan;
        else ++le;
    }
    if(le % 2 == 1) {
        cout<<le*chan;
    } else {
        cout<<dc(le) + dc(chan);
    }
    return 0;
}
