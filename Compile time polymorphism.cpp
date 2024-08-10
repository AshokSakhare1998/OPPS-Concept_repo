#include <iostream>
using namespace std;

//Base class
class Animal{
    public:
    //virtual function
   virtual void make(){
       cout<<"---Animal--make=sound"<<endl;
   }
};
   //derived class
   class Dog:public Animal{
       public:
       void make()override{
            cout<<"---Dog--make=sound"<<endl;
           
       }
   };
//derived class
   class Cat :public Animal{
       public:
       void make()override{
            cout<<"---Cat--make=sound"<<endl;
           
       }
   };
int main() {
   Animal* animal;
   Dog dog;
   Cat cat;
   
   //pointing to dog object
   animal =&dog;
   animal->make();
   //pointong to cat object
   animal =&cat;
   
   animal->make();
    return 0;
}