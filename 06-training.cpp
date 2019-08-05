#include<iostream>
#include<vector>

using namespace std;


int main () {

    vector<int> vector_hoge;
    vector_hoge.push_back(2);
    vector_hoge.push_back(3);

    vector<int> vector_hoge_hoge{11,22,33,44};

    for (int i = 0; i < 4; i++) {
        cout << vector_hoge_hoge[i] << endl;
    }

    for (auto x : vector_hoge_hoge) { //拡張for文（コピー）
        cout << x << endl;
    }

}