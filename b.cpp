#include <iostream>
#include <cmath>

using namespace std;
int main() {
    string s;
    cin >> s;
    int sl=s.length();
    int m[5];
    m[0]=0;
    m[1]=1;
    m[2]=2;
    m[3]=3;
    m[4]=4;
    if (sl<=20){
        cout << "1 " << sl << endl;
        cout << s;
    } else {
        if (sl<=40){
            int fi,se;
            fi=sl/2;
            se=sl/2+sl%2;
            cout << "2 " << se << endl;
            for (int i=0;i<fi;i++){
                cout << s[i];
            }
            if (fi==(se-1)) cout << "*" << endl; else cout << endl;
            for (int i=0;i<se;i++){
                cout << s[i+fi];
            }
        } else {
            if (sl<=60){
                int f1,f2,f3;
                f1=sl/3;
                sl-=f1;
                f2=sl/2;
                f3=sl/2+sl%2;
                cout << "3 "<< f3 << endl;
                for (int i=0;i<f1;i++){
                    cout << s[i];
                }
                if (f1==(f2-1)) cout << "*" << endl; else cout << endl;
                for (int i=0;i<f2;i++){
                    cout << s[i+f1];
                }
                if (f2==(f3-1)) cout << "*" << endl; else cout << endl;
                for (int i=0;i<f3;i++){
                    cout << s[i+f1+f2];
                }
            } else {
                if (sl<=80){
                    int f1,f2,f3,f4;
                    f1=sl/4;
                    sl-=f1;
                    f2=sl/3;
                    sl-=f2;
                    f3=sl/2;
                    f4=sl/2+sl%2;
                    cout << "4 "<< f4 << endl;
                    for (int i=0;i<f1;i++){
                        cout << s[i];
                    }
                    for (int k=0;k<(f4-f1);k++){
                        cout << "*";
                    }
                    cout << endl;
                    for (int i=0;i<f2;i++){
                        cout << s[i+f1];
                    }
                    for (int k=0;k<(f4-f2);k++){
                        cout << "*";
                    }
                    cout << endl;
                    for (int i=0;i<f3;i++){
                        cout << s[i+f1+f2];
                    }
                    for (int k=0;k<(f4-f3);k++){
                        cout << "*";
                    }
                    cout << endl;
                    for (int i=0;i<f4;i++){
                        cout << s[i+f1+f2+f3];
                    }
                } else {
                    int f1,f2,f3,f4,f5;
                    f1=sl/5;
                    sl-=f1;
                    f2=sl/4;
                    sl-=f2;
                    f3=sl/3;
                    sl-=f3;
                    f4=sl/2;
                    f5=sl/2+sl%2;
                    cout << "5 "<< f5 << endl;
                    for (int i=0;i<f1;i++){
                        cout << s[i];
                    }
                    for (int k=0;k<(f5-f1);k++){
                        cout << "*";
                    }
                    cout << endl;
                    for (int i=0;i<f2;i++){
                        cout << s[i+f1];
                    }
                    for (int k=0;k<(f5-f2);k++){
                        cout << "*";
                    }
                    cout << endl;
                    for (int i=0;i<f3;i++){
                        cout << s[i+f1+f2];
                    }
                    for (int k=0;k<(f5-f3);k++){
                        cout << "*";
                    }
                    cout << endl;
                    for (int i=0;i<f4;i++){
                        cout << s[i+f1+f2+f3];
                    }
                    for (int k=0;k<(f5-f4);k++){
                        cout << "*";
                    }
                    cout << endl;
                    for (int i=0;i<f5;i++){
                        cout << s[i+f1+f2+f3+f4];
                    }
                }
            }
        }
    }
    return 0;
}