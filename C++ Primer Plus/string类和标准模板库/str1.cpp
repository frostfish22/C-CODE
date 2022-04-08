#include<iostream>
#include<string>
using namespace std;
int main(){
    string one("Lottery Winner!"); //创建字符串
    cout<<one<<endl;

    string two(20,'$');//创建重复字符的字符串
    cout<<two<<endl;

    string three(one);//通过对象创建字符串
    cout<<three<<endl;

    one+=" Oops!";//overloader += 在C++中可以通过重载加法添加字符串，但是Java不能
    cout<<one<<endl; 

    two = "Sorry! That was ";
    three[0] = 'P';
    string four; //声明字符串变量
    four = two + three; //overloaded +,=
    cout<<four<<endl;

    char alls[] = "All's well that ends well";
    string five(alls,20); //通过引入字符数组并选择范围创建字符串
    cout<<five<<endl;

    string six(alls+6,alls+10); //选择字符数组范围创建字符串
    cout<<six<<endl;

    string seven(&five[6],&five[10]); //与6同理
    cout<<seven<<endl;

    string eight(four,7,16); //选择字符串范围赋值
    cout<<eight<<" in motion!"<<endl;
    return 0;
}