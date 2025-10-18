#include <iostream>


using namespace std;

int main() {
    int x,y;
    enum location {ocean, beach};
    location map;


    cout << "enter cordinates(x,y) (from 0 to 2)" << endl;
    cin >> x >> y;

    if (x>2 || x<0 || y>2 || y<0) {
        cout << "enter valid coordinates"<< endl;
    }
    else {

        if (x+y>2) {
            map = beach;
        }
        else { map = ocean; }

              switch (map) {
                  case ocean:
                      cout << "ocean"<<endl;
                      break;
                  case beach:
                      cout<<"beach"<<endl;
                      break;
                      default:
              }

    }
    return 0;
}