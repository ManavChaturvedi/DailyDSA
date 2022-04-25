// TEMPLATE CLASS

#include <bits/stdc++.h>

using namespace std;

template <class T>
class arth{
    private:
    T a;
    T b;

    public:
    arth(T a, T b);
    T add();
    T sub();
};

template <class T>
arth <T> :: arth(T a, T b){
    this -> a = a;
    this -> b = b;
}

template <class T>
T arth <T> :: add(){
    T c;
    c=a+b;
    return c;
}

template <class T>
T arth <T> :: sub(){
    T c;
    c = a-b;
    return c;
}

int main() {
    arth <int> arth1 (10,5);
    arth <float> arth2 (12.3,3.8);
    cout<<arth1.add()<<endl;
    cout<<arth2.sub();
    return 0;
}
