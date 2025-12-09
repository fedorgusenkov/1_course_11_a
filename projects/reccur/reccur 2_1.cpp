 #include <iostream>

double ex(double n) {
    return n == 1 ? -1 : n * pow(-1,n)* ex(n - 1);
}
int main() {
    std::cout << "enter the number n" << std::endl;
    double n;
    std::cin>>n;
    std::cout << "Ex = "<< ex(n) << std::endl;

    return 0;
}