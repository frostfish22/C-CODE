#include<iostream>
using namespace std;
int main(){
    struct Student{
        char name[20];
        int iNumber;
        char cSex;
        int iGrade;
    }student={"SuYuQun",12061212,'W',2};
    struct Student* pStruct;
    pStruct=&student;
    cout<<pStruct->name<<endl;
    cout<<pStruct->cSex<<endl;
    cout<<student.name<<endl;
    cout<<student.cSex<<endl;
    cout<<(*pStruct).name<<endl;
    cout<<(*pStruct).cSex<<endl;//三个调用方法是等效的！！
    return 0;
}