#include<iostream>
using namespace std;
class Student{
    private:
        string name;
        int age;
        int height;
        int weight;
        string csex;
    public:
        Student(string name, int age, int height);
        void setname(string name);
        string getname() { return name; }
        void setage(int age);
        void setheight(int height);
        void setweight(int weight);
        void setcsex(string csex);
        ~Student();
}
Student::Student(string name, int age, int height){
    this->name = name;
    this->age = age;
    this->height = height;
}
int main(){
    Student hongji = new Student("hongji", 18, 180);
    cout<<hongji.name<<endl;
    return 0;
}