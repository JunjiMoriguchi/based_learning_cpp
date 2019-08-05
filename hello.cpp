#include<iostream>
#include<limits>

using namespace std;

int main(void) {

    cout << "hello world" << endl;
    
    // size of integer
    cout << numeric_limits<int>::lowest() << "," << numeric_limits<int>::max() << endl;


    // 参照
    int hoge_a = 10;
    int& ref_hoge_a = hoge_a;

    ref_hoge_a = 20;

    cout << ref_hoge_a << endl;


    return 0;
}