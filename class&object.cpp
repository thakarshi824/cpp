#include <iostream>
using namespace std;

class student {

private:
    int a, b, c;
public:
    int d, e;
    int sum(int a,int b,int c) {
        cout<<"The Sum of a,b & c is : "<<a+b+c<<endl;
        cout<<"The Sum of d & e is : "<<d+e<<endl;
        return a+b+c;
    }
    int sum() {
        int d,e;
        return d+e;
    }
};


int main() {
    student thakarshi;
    /*thakarshi.d=53;
    thakarshi.e=73;*/
    cout<<"Enter value of d : ";
    cin>>thakarshi.d;
    cout<<"Enter value of e : ";
    cin>>thakarshi.e;
    thakarshi.sum(65,54,79);
    thakarshi.sum();
    return 0;
}