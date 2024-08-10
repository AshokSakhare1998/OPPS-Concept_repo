#include<iostream>
using namespace std;
//abstract class
class Shape{
    public:
 //pure virtual function
 virtual void draw()=0;//abstract methhod
};
class Circle :public Shape{
    public:
    void draw()override{
        cout<<"the circle"<<endl;
    }
    
};
class Rectangle:public Shape{
    public:
    void draw()override{
        cout<<"the Rectangle..."<<endl;
    }
};
int main(){
    Shape* shape1=new Circle();
    Shape* shape2=new Rectangle();
    shape1->draw();
    shape2->draw();
    delete shape1;
    delete shape2;
    return 0;
    
}