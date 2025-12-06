#include <iostream>
using namespace std;

void table(int& x) {
    for (int i{1}; i<=x; i++) {
        cout<<i<<" "<<i*i<<endl;
    }
};

int main() {
    int x;
    cin>>x;
    table(x);
    return 0;
}
