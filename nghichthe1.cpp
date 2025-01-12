#include <iostream>
#define f(a, n) for(int i=0;i<n;i++)cin>>a[i]
#define in(a, n) for(int i=0;i<n;i++)cout<<a[i]<<" "
using namespace std;

int main() {
    freopen("nghichthe1.inp", "r", stdin);
    freopen("nghichthe1.out", "w", stdout);
    int n; cin>>n;
    int a[n], p[n];
    f(a, n);
    p[0] = 0;
    for(int i = 1; i < n; i++) {
        int c = 0;
        for(int j = 0; j < i; j++) {
            if(a[i] < a[j]) {
                ++c;
            }
        }
        p[i] = c;
    }
    in(p, n);
    return 0;
}
