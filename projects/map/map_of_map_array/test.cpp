#include <iostream>
using namespace std;

const int ROWS = 10;
const int COLS = 20;

// Функция, которая заполняет карту: пляж и море
void fillMap(char map[ROWS][COLS], int rows, int beachRows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            if (i < beachRows) {
                map[i][j] = 'B';  // B — beach (пляж)
            } else {
                map[i][j] = '~';  // ~ — море
            }
        }
    }
}

// Функция, которая выводит карту
void printMap(char map[ROWS][COLS], int rows) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < COLS; j++) {
            cout << map[i][j];
        }
        cout << '\n';
    }
}

int main() {
    char map[ROWS][COLS];

    int beachRows = 3; // сколько строк будет пляжа
    fillMap(map, ROWS, beachRows);
    printMap(map, ROWS);

    return 0;
}
