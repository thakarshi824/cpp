#include<iostream>
using namespace std;

int sum(float a, int b) {
    cout<<"using function with 2 arguments "<<endl;
    return a+b;
}

int sum(int a, int b, int c) {
    cout<<"using function with 3 arguments "<<endl;
    return a+b+c;
}
//calculate volume of rectangular box
int volume(int l, int b, int h) {
    return l*b*h;
}

//calculate volume of cylinder
int volume(int r, int h) {
    return (3.14*r*r*h);
}

//calculate volume of cube
int volume(int c) {
    return (c*c*c);
}
int main() {
    cout<<"The volume of rectangular box 2,2 & 2 is ="<<volume(2,2,2)<<endl;
    cout<<"The volume of cylinder 2 & 2 is ="<<volume(2,2)<<endl;
    cout<<"The volume of cube 4 is ="<<volume(4)<<endl;
    /* cout<<"The sum of 10 & 20 is = "<<endl<<sum(10,20)<<endl;
        cout<<"The sum of 10,20 & 30 is = "<<endl<<sum(10,20,30)<<endl;*/
    return 0;
}

    