#include<iostream>


using namespace std;


void f5(int&& x) { //右辺参照
    cout << ++x << endl;
}

#if 0
void MySwap(int& a, int& b) {
    int tmp = a;
    a = b;
    b = tmp;
}
void MySwap(double&a, double& b) {
    double tmp = a;
    a = b;
    b = tmp;
}
#else
template <typename T> //テンプレートの利用例
void MySwap(T& a, T& b){
    T tmp = a;
    a = b;
    b = tmp;
}
#endif

int main() {
    //sample
    int x5 = 500;
    f5(static_cast<int&&>(x5));
    cout << x5 << endl;
    f5(510);
    //sample
    int aa = 1;
    int bb = 5;
    MySwap(aa,bb); //オーバーロード
    cout << aa << ':' << bb << endl;
    double cc = 1.2;
    double dd = 2.1;
    MySwap(cc,dd); //オーバーロード
    cout << cc << ':' << dd << endl; 
}