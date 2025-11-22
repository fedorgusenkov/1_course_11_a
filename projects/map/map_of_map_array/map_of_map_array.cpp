#include <iostream>
using namespace std;

void exit();

int main() {
short const height{2};
short const weight{2};
    char map[height][weight];

    for (int w{0}; w<=weight; w++) {
     for (int h{0}; h<=height; h++) {
if (h+w>2) {
    map[h][w] = 'b';
}
else {map[h][w] = 'o';}

     }
    }

    for (int i = 0; i <= weight; i++) {
        for (int j = 0; j <= height; j++) {
            cout << map[i][j]<<" ";
        }
        cout << '\n';
    }

    return 0;
}


