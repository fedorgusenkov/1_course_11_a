 #include <iostream>
//пример на суммирование
double sum(int n) {
    //условие ? значение_если_истина : значение_если_ложь(тернарный оператор)
    return n == 1 ? 1 : n + sum(n - 1);
}
//пример на вычисление произведения
double factorial(int n) {
    return n == 1 ? 1: n * factorial(n - 1);
}
int main() {
    std::cout << "enter the number" << std::endl;
    int n;
    std::cin>>n;
    std::cout << "Сумма натуральных чисел до "<<n<<" включительно = "<< sum(n) << std::endl;
     std::cout<<"Факториал числа "<<n<<" = "<<factorial(n) << std::endl;
    return 0;
}