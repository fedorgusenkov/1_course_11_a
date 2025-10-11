#include <iostream>
#include <string>

using namespace std;

int main() {
    int f1,f2;
    int r1, r2;
    int x,y;
    float answer;
    string symbol;
    char temp;
    cout << "enter the first number" << endl;
    cin >> f1 >> temp >> f2;
    cout << "enter the second number" << endl;
    cin >> r1 >> temp >> r2;

    cout << "choose operation" << endl;
    cin >> symbol;


    if(symbol == "+") {

        x=(f1*r2)+(r1*f2);
        y=f2*r2;
        answer = static_cast<float>(x)/y;
        cout << answer << endl;
    }

    if(symbol == "-") {

        x=(f1*r2)-(r1*f2);
        y=f2*r2;
        answer = static_cast<float>(x)/y;
        cout << answer << endl;

    }

    if(symbol == "*") {

        x=f1*r1;
        y=f2*r2;
        answer = static_cast<float>(x)/y;
        cout << answer << endl;}

    if(symbol == "/") {

        x=f1*r2;
        y=f2*r1;
        answer = static_cast<float>(x)/y;
        cout << answer << endl; }


    return 0;
}








