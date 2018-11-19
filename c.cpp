#include <iostream>
#include <cmath>

int m[100002];
int pl[100002];
int ko[100002];
int mi[100002];
int ne[100002];
int jj[100002];
using namespace std;
int n,a=0,b=0,na=1,t=0,pluss=0,minuss=0,last=0,mii=0,maa=0,mi1=0,ma1=0,fl=0;

void obh (int i,int k) {
    if ((i==n)||(fl==1)){
        jj[i]=k;
        fl=1;
    } else {
        cout << i << " ";
    mii=5-pl[i];
    maa=1-mi[i];
    for (int j=maa;j<mii;j++){
        if (fl==1){
            jj[i]=k;
            break;
        }
        if ((k+ko[i-1])!=j) {
            obh(ne[na],j);
        }
    }
    }
}
int main() {
    cin >> n;
    if (n==1){
        cin >> a;
        cout << 1;
        return 0;
    }
    cin >> b;
    for (int i=1;i<n;i++){
        cin >> a;
        if (a>b){
            m[i]=1;
        } else {
            if (a<b) {
                m[i]=2;
            } else {
                m[i]=0;
            }
        }
        b=a;
    }
    na=1;
    m[1]=0;
    for (int i=2;i<n;i++){
        if (m[i]==1) {
            t++;
            pluss = max(pluss, t);
            minuss = min(t, minuss);
        } else {
            if (m[i]==2){
                t--;
                pluss = max(pluss, t);
                minuss = min(t, minuss);
            } else {
                ko[na]=t;
                ne[na]=i;
                pl[na]=pluss;
                mi[na]=minuss;
                pluss=0;
                minuss=0;
                na=i;
            }
        }
    }
    ne[na]=n;
    pl[na]=pluss;
    mi[na]=minuss;
    mii=5-pl[1];
    maa=1-mi[1];
    for (int j=maa;j<mii;j++){
        obh(ne[1],j);
        if (jj[1]!=0){
            break;
        }
    }
    cout << endl;
    for (int i=1;i<n;i++){
        cout << jj[i] << " ";
    }
    cout << endl;
    for (int i=0;i<n;i++){
        if (m[i]==0){
            cout << jj[i]+1 << " ";
            last=jj[i]+1;
        } else {
            if (m[i]==1) {
                cout << last+1 << " ";
                last++;
            } else {
                if (m[i]==2) {
                    cout << last-1 << " ";
                    last--;
                }
            }
        }
    }
    return 0;
}