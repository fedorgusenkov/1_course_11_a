#include <iostream>
using namespace std;


int main() {
    int a,b,c;
    int temp;
    cout << "enter 3 numbers"<< endl;
    cin >> a >> b >> c;


if (a > b && a>c) {

    temp = c;
    c=a;
    a=temp;
    if (c>b) {
        temp=b;
        b=a;
        a=temp;
    }}
    if (b>a && b>c) {
        temp = c;
        c=b;
        b=temp;
        if (c<a) {
            temp=a;
            b=a;
            a=temp;

        }
    }
    if (c > b && c>a) {


        if (a>b) {
            temp=b;
            b=a;
            a=temp;
        }}

    cout<<a<<" "<<b<< " "<< c<<endl;
}

