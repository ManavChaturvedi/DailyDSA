#include <bits/stdc++.h>

using namespace std;

struct rect{
        int length;
        int beadth;
};

int main() {
    struct rect *p;
    p=new struct rect [4];
    p ->beadth=10;
    p ->length=5;
    cout<<(p->length)*(p->beadth);
    return 0;
}
