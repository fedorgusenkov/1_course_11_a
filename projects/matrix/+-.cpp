#include <iostream>


using namespace std;

int main() {
    int x{0},y{0};
    char space;
    cout << "enter values" << endl;
    cin>>x;
    cin>>y;
    for (int b{0}; b<=x; b++) {
        for (int a{0}; a<=y; a++)
        {
            cout<<a<<","<<b<<" ";
            }
        cout<< " "<< endl;
        }

return 0;
    }

