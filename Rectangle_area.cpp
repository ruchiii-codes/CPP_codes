#include <iostream>

using namespace std;
 
class Rectangle{
    protected:
        int w,h;
    public:
        void read_input()
        {
            cin>>w>>h;
        } 

        void display()
        {
            cout<<w<<" "<<h<<endl;
        }  
};

class RectangleArea:public Rectangle{
    public:     
        void display()
        {  
            int a = w*h;
            cout<<a<<endl;
        }
};



int main()
{
    RectangleArea r_area;
    
    r_area.read_input();
    
    r_area.Rectangle::display();
    
    r_area.display();
    
    return 0;
}