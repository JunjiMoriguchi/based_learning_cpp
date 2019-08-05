#include<iostream>
#include<complex>
#include<memory>

using namespace std;

int main() {


// Lesson 1
cout << "(^_^)" << endl; //リテラル
cout << R"XXX((^_^)¥n)XXX" << endl; //生文字リテラル

// Lesson 2
int int_hoge = -11;
unsigned int uint_hoge = 10;
auto auto_hoge = int_hoge + uint_hoge; // unsined intになる
cout << auto_hoge << endl; // -1にはならない

// Lesson 3
using cplx = complex<double>;
shared_ptr<cplx> pp = make_shared<cplx>(3,-4); //スマートポインタでフリーストア空間に配置
cout << *pp << endl;
double db_pp = abs(*pp);
cout << db_pp << endl;


}