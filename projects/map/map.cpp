#include <iostream>


using namespace std;

int main() {
    int x,y;


cout << "enter cordinates(x,y) (from 0 to 2)" << endl;
cin>> x >> y;

    if (x>2 || x<0 || y>2 || y<0) {
        cout << "enter valid coordinates"<< endl;
    }
    else {
        if (x+y>2) {
            cout << "beach" << endl;


    }
        else ( cout << "ocean" << endl);



    }

return 0;
}