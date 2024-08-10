// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Student{
    private:
    string name;
    int age;
    public:
    void setName(string n){
        name =n;
    }
        string getName() {
        return name;
    }
        void setAge(int a){
            age =a;
        }
        int getAge(){
            
            return age;
        }
        
    };

int main() {
   Student student;
   student.setName("Ashok");
   student.setAge(20);
   
   cout<<"Name :"<<student.getName()<<endl;
   cout<<"Age :"<<student.getAge()<<endl;
 //   return 0;
}