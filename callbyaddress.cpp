#include<iostream>

using namespace std;

// void show(int *);

// int main(){
//     int x = 9;
//     cout<<"x = "<<x<<endl;
//     show(&x);
//     cout<<"x = "<<x<<endl;
// }

// void show(int * ptr){
//     *ptr = 99;
// }

//-----------------------------------------
//inline function

inline int cube(int s){
    return s*s*s;
}

int main(){
    cout<<"The cube of 3 is: "<<cube(3)<<endl;
    return 0;
}
