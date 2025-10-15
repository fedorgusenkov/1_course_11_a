#include <iostream>


using namespace std;

int main() {
    int f1,f2;
    int r1, r2;
    int x,y;
    float answer;
    char symbol;
    char temp;
    cout << "enter the first number" << endl;
    cin >> f1 >> temp >> f2;
    cout << "enter the second number" << endl;
    cin >> r1 >> temp >> r2;

    cout << "choose operation " << endl;
    cin >> symbol;







 switch(symbol) {
    case 43:
        x=(f1*r2)+(r1*f2);
        y=f2*r2;
        answer = static_cast<float>(x)/y;
        cout << answer << endl;
        break;

    case 45:
        x=(f1*r2)-(r1*f2);
        y=f2*r2;
        answer = static_cast<float>(x)/y;
        cout << answer << endl;
        break;


    case 42:
        x=f1*r1;
        y=f2*r2;
        answer = static_cast<float>(x)/y;
        cout << answer << endl;
        break;

     case 47:
        x=f1*r2;
        y=f2*r1;
        answer = static_cast<float>(x)/y;
        cout << answer << endl;
    break;
    default:
}




    return 0;
}








