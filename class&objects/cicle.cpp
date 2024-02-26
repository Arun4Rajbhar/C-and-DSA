#include <iostream>
using namespace std;
class circle
{
private:
    double radius;

public:
    circle(){
        radius=0;
    }
    double getRadius();
    void setRadius(double r);
    double area();
    double primeter();
    
};



double circle::getRadius()
{
    return radius;
}
void circle::setRadius(double r)
{
    if (r >= 0)
    {
        radius = r;
    }
    else
    {
        cout << "invalid input";
    }
}
double circle::area()
{
    return radius * 3.14 * radius;
}
double circle::primeter()
{
    return 2 * 3.14 * radius;
}




int main()
{
    circle c1,c2;
    c1.setRadius(67);
    // cout<<c1.getRadius();
    cout << c1.area()<<"\n";
    cout<<c1.primeter();

    return 0;
}