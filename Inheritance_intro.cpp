#include <iostream>
using namespace std;


class isosceles
{
    public:
    void show()
    {
        cout<<"I am an isosceles triangle\n";
        cout<<"In an isosceles triangle two sides are equal\n";
    }
    
};
class triangle : public isosceles
{
    public:
    void showtri()
    {
        cout<<"I am a triangle";
    }
};
int main()
{
    triangle t;
    t.show();
    t.showtri();
    return 0;
}
