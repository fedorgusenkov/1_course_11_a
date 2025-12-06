#include <iostream>
#include <cmath>
// прототип функции, итерационно суммирующей
//отрезок ряда
double expUser ( double, double);
 int main() {
    double x, eps;
     using namespace std;

    while(true) {
        cout << "Введите х и точность: ";
        cin >> x >> eps;
        if ( fabs (x) < 1
        && fabs (eps) < 0.05) break;
        cout << "Параметры введены неверно. "
        << " Попробуйте еще раз! \n";
    }
    cout << "Итерац. вычисл. значение = "
    << expUser (x, eps)
    << "\nЗнач. встроенной функции = "
    << exp (x);
    return 0;
}
 double expUser (double x, double eps) {
    double sum{1}, term {1};
        for (int i{1}; fabs(term) > eps; i++) {
            term = term * x / i;
            sum = sum + term;
        }
            return sum;
        }