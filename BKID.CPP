#include <iostream>
#define f(a) for(int &x:a)cin>>x;
using namespace std;

int main() {
    freopen("BKID.INP", "r", stdin);
    freopen("BKID.OUT", "w", stdout);
    int n; cin>>n;
    int a[n];
    f(a);
    int j = 0;
    for(int i = 1; i < n; i++) {
        int d = a[j];
        if(d > a[i]) {
            cout<<j+1<<endl;
            a[j] = 0;
            j = i;
        } else {
            cout<<i+1<<endl;
            a[i] = 0;
        }
    }
    return 0;
}
