#include<iostream>
using namespace std;

int main ()
{
    int a = 123;
    cout<<a<<endl;

    char b = 'R';
    cout<<b<<endl;

    float f = 1.2;
    cout<<f<<endl;

    double d = 1.23;
    cout<<d<<endl;

    bool bl = true;
    cout<<bl<<endl;

    int a_size = sizeof(a);
    cout<<"Size of a is :"<<a_size<<endl;

    int b_size = sizeof(b);
    cout<<"Size of b is :"<<b_size<<endl;

    int f_size = sizeof(f);
    cout<<"Size of f is :"<<f_size<<endl;

    int d_size = sizeof(d);
    cout<<"Size of d is :"<<d_size<<endl;
    
    int bl_size = sizeof(bl);
    cout<<"Size of bl is :"<<bl_size<<endl;

}