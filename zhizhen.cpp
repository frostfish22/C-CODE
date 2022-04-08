#include<iostream>
using namespace std;
int main(){
	int hoge = 5;
	int piyo = 5;
	int *hoge_p;
	int **hoge_p1;
	cout<<&hoge<<endl;
	cout<<&piyo<<endl;
	cout<<&hoge_p<<endl;
	cout<<&hoge_p1<<endl;
	
	cout<<endl;
	
	hoge_p = &hoge;
	cout<<hoge_p<<endl;
	cout<<*hoge_p<<endl;
	cout<<&hoge_p<<endl;
	
	cout<<endl;
	
	hoge_p1=&hoge_p;
	cout<<hoge_p1<<endl;
	cout<<*hoge_p1<<endl;
	cout<<&hoge_p1<<endl;
	cout<<**hoge_p1<<endl;
	
	cout<<endl;
	
	cout<<hoge_p1+2<<endl;
	return 0;
} 
