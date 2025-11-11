#include <iostream>


using namespace std;

int main() {
    int x,y;
    int a,b;
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


        string ans;
        cout<<"Do you wont to go?"<<endl;
        cin>>ans;



        while (ans=="yes"){
            int dr;
            cout << "where would you like to go (forward(1), back(2), right(3), left(4))"<< endl;
            cin >> dr;
            switch (dr) {
                case 1:

                    --y;
                    break;
                case 2:

                    ++y;
                    break;
                case 3:

                    ++x;
                    break;
                case 4:

                    --x;
                    break;
                default:
            }
            if (x>2 || x<0 || y>2 || y<0) {
                cout << "going out of map"<< endl;

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
            cout<<"Do you wont to go?"<<endl;
            cin>>ans;
        }
        return 0;
    }
}