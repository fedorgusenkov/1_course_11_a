#include <iostream>
using namespace std;

const int SIZE(20);


void input(char* arr) {
    char kf = '0';
    int i = 0;
    while (kf >= '0' && kf <= '9' && i < SIZE)
    {
        kf = getchar();
        arr[i] = kf;
        i += 1;
    }
    arr[i] = '\0';

}

void output(char* arr)
{
    int i = 0;
    while (arr[i] != '\0')
    {
        std::cout << arr[i];
        i++;
    }

}

int str_int(char* arr)
{
    int end = 0;
    int s = 0;
    int p = 1;

    while (arr[end + 1] != '\0')
    {
        end++;
    }

    for (int i = end - 1; i >= 0; i--)
    {
        s += static_cast<int>(arr[i] - '0') * p;
        p *= 10;
    }

    return s;
}

int main()
{
    /*int n;
    cin >> n;
    int max = n;
    int min = 1;
    int middle = 0;

    string quest = "";
    while (max > min and quest != "угадал") {
      middle = (max + min) / 2;
      cout << (max + min) / 2;
      cin >> quest;
      if (quest == "больше") {
        min = middle;
      }
      else if (quest == "меньше") {
        max = middle;
      }
    }
    */
    char arr[SIZE];
    input(arr);
    output(arr);
    int num = str_int(arr);


    std::cout << num;

}