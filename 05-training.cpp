#include<iostream>
#include<utility>

using namespace std;

int factorial (int n) {
    int total = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0){
            total = 1;
        } else {
            total = total * (i+1);
        }
    }
    return total;
}

void MySwap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

int main() {

    //lesson1
    cout << "lesson1" << factorial(10) << endl;
    //lesson2
    int ii = 12;
    int jj = 21;
    MySwap(&ii,&jj);
    cout << ii << ":" << jj << endl;
    //lesson3
    double kk = 1.2;
    double ll = 2.1;
    swap(kk,ll);
    cout << kk << ":" << ll << endl;

}