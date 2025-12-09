 #include <iostream>

double sum(double n, double x){
    return n == 1 ? cos(pow(1+pow(x,2),2)): sum(n-1,x)+cos(pow(1+((n*pow(x,2))),2));
}
int main() {
    std::cout << "enter the numbers (x,n)" << std::endl;
    double x,n;
    std::cin>>x>>n;
    std::cout << "Summ= "<< sum(n,x) << std::endl;

    return 0;
}