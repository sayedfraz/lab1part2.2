#include <iostream>
using namespace std;
// Base class
class Shape
{
public:
 // pure virtual function providing interface framework.
 virtual int getArea() = 0;
 void setPi(int p)
 {
 pi = p;
 }
 void setRaduis(int r)
 {
 radius = r;
 }
protected:
 int pi;
 int radius;
};
class Circle: public Shape
{
public:
 int getArea()
 {
 return (pi *(radius * radius));
 }
};
int main(void)
{
 Circle Cir;
 Cir.setPi(5);
 Cir.setRaduis(7);
 // Print the area of the object.
 cout << "Total Circle area: " << Cir.getArea() << endl;
 return 0;
}
