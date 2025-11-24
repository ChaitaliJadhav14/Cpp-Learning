#include<iostream>
using namespace std;
//once check on chatgpt
class Shape
{
public:
virtual float calculate_area() {
        return 0;
    }

};
class Circle:public Shape
{
protected:
float radius;
public:
Circle(float r)//:radius(r){
{
radius=r;
}

float calculate_area()
{
return 3.14*radius*radius;
}
};
class Rectangle:public Shape{
protected:
float width,height;
public:
Rectangle(float w,float h):width(w), height(h)
{
width=w;
height=h;
}
float calculate_area()
{
return width*height;
}
};

int main() {
    Shape   *shapes[2];//array of pointers
    shapes[0] = new Rectangle(5.0, 4.0);//allocated memory
    shapes[1] = new Circle(3.0);//allocated memory

    for (int i = 0; i < 2; i++) {
        cout << "The area is: " << shapes[i]->calculate_area() << endl;
                                  //pointer to method
    }

    for (int i = 0; i < 2; i++) {
        delete shapes[i];//free
    }

    return 0;
}

