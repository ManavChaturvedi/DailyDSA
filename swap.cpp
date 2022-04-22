#include <bits/stdc++.h>

using namespace std;

 //SWAPPING VIA POINTERS

// int swap(int *x, int *y){
//     int temp;
//     temp= *x;
//     *x = *y;
//     *y = temp;
// }

// int main() {
//     int a,b;
//     cin>>a>>b;
//     swap(&a,&b);
//     cout<<a<<" "<<b;
//     return 0;
// }


 //SWAPPING VIA REFERENCE

int swap(int &x, int &y){
    int temp;
    temp = x;
    x=y;
    y=temp;
}

int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);;
    cout<<a<<" "<<b;
    return 0;
}
