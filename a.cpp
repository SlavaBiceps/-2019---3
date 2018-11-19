#include <iostream>
#include <cmath>

int n,k,s,a,ma;
int m[102];
using namespace std;
int main() {
    cin >> n >> k;
    for (int i=0;i<n;i++){
        cin >> a;
        m[a]++;
    }
    for (int i=0;i<=100;i++){
        ma=max(ma,(m[i]-1)/k);
    }
    ma++;
    for (int i=0;i<=100;i++){
        if (m[i]>0) s+=((ma*k)-m[i]);
    }
    cout << s;
    return 0;
}