#include <iostream>

int main() {

std::cout<<"do you want to calculate the summ?"<<std::endl;
    std::string ans;
    std::cin>>ans;



    while (ans=="yes") {
        int x,y;
        std::cout << "enter values"<<std::endl;
        std::cin>>x;
        std::cin>>y;

        int s{0};
        s=y+x;
        std::cout<<s<<std::endl;
        std::cout<<"do you want to calculate the summ?"<<std::endl;
        std::cin>>ans;

    }
return 0;


}