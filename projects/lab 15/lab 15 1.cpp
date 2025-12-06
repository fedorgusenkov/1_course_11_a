#include <iostream>
#include <cmath>

//прототипы функций
void newInitArray(double*, int);
void printArray(double*, int);
double minArray(double*, int);
int dimension(double*, int);
double summ(double*, int);
double avggeom(double*, int);
void sortArrayBubble(double*, int);
void sortArraySelection(double*, int);
int main() {
    using namespace std;
    //переменная, оперед. размерность
    size_t size{};
    cout << "enter n of array";
    //ввод размерности
    wcin >> size;
    //выделение памяти в куче под массив
    double *array = new double[size];
    //инициал. и обработка одном. массива
    newInitArray(array, size);
 cout << "Initialized array: \n";
printArray (array, size);
cout << "\nMin in array = "<< minArray(array, size)<<endl;
    cout<<"% 4: "<<dimension(array, size)<<endl;
    cout<<"Summ of n % 3 !=0:  "<<summ(array, size)<<endl;
    cout<<"Avg geometrical of 2n numbers: "<<avggeom(array, size)<<endl;
    sortArrayBubble(array, size);
    sortArraySelection(array, size);
delete []array;
return 0;
}
//описание функций
void newInitArray(double *a, int n) {
    for(int i{0}; i < n; i++) {
        std::cout << "a[" << i << "]= ";
        std::cin >> a[i];
    }
}
    void printArray(double *a, int n) {
    for(int i(0); i < n; i++) {
        std::cout << a[i] << " ";
    }
}
        double minArray(double *a, int n) {
            double min(a[0]);
            for (int i{1}; i < n; i++) {
                if (min > a[i]) min = a[i];
            }
            return min;
        }


int dimension(double *a,int n) {
    int dimension{0};
    for (int i{1}; i<n; i++) {
        if (static_cast<int>(a[i]) % 4 == 0) {dimension++;}

    }
    return dimension;
}


double summ(double *a,int n) {
    double sum;
    for (int i{0}; i<n-1; i++) {
        if (static_cast<int>(a[i]) % 3 != 0) {
            sum=sum+(a[i]/4);
        }
    }
    return sum;
}

double avggeom(double *a,int n) {
    double avg{1},avg1{1};
    double p{1};

    for (int i{0}; i<n-1; i=i+2) {
        avg1=avg1*abs(a[i]);
        p++;
    }
    avg=pow(avg1,1/p);
    return avg;
}

void sortArrayBubble(double *a, int n) {
    double temp{1};
for (int i{0};i<n-1;i++) {
    for (int j{0}; j<n-1; j++) {
        if (a[j]>a[j+1]) {
            temp=a[j+1];
            a[j+1]=a[j];
            a[j]=temp;
        }
    }
}
    std::cout << "Array sorted by bubbles: \n";
    printArray (a, n);
    std::cout << std::endl;
}

void sortArraySelection(double *a, int n) {
    for (int i{0}; i<n-1; i++) {
    int m=i;
    for (int j=i; j<n; j++) {
     if (a[m]>a[j]) {m=j;}
        std::swap(a[i],a[m]);
    }

    }
    std::cout << "Array sorted by selection: \n";
    printArray (a, n);
    std::cout << std::endl;
}