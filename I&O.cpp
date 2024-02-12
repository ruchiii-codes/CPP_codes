#include <iostream>
using namespace std;

class add
{
    int a,b,c;
    public:
        void getvalue();
};
    void add::getvalue()
        {
            a=1;
            b=2;
            c=7;
            cout<<""<<a+b+c;
        }
int main()
{
    add A;
    A.getvalue();
}