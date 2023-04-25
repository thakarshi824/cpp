#include<iostream>
using namespace std;

void foo();


int main() {

    foo();
    foo();
    foo();
    return 0;
}

void foo(){
    static int count=0;
    count++;
    cout<<"count: "<<count<<endl;
}