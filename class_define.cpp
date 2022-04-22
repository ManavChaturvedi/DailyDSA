#include <bits/stdc++.h>

using namespace std;

class rect{
    private:
    int length;
    int bredth;

    public:
    rect(int l, int b);
    int area();
    int perimeter();
    int getLength(){
        return length;
    };
    int setLength(int l){
        length = l;
    };
};

rect :: rect(int l,int b){
    length = l;
    bredth = b;
}

int rect :: area(){
    return length*bredth;
}

int rect :: perimeter(){
    return 2*(length+bredth);
}

int main() {
    int l,b;
    cin>>l>>b;
    rect r(l,b);
    cout<<r.area()<<endl;
    cout<<r.perimeter()<<endl;
    cout<<r.getLength()<<endl;
    r.setLength(20);
    cout<<r.getLength()<<endl;
    return 0;
}
