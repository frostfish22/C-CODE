#include<iostream>
using namespace std;
int main(){
    FILE *file;
    char ch;
    while((file=fopen("123.txt","w"))==NULL){
        printf("connot open file\n");
        exit(0);
    }
    ch = getchar();
    while(ch!='#'){
        fputc(ch,file);
        ch=getchar();
    }
    fclose(file);
    return 0;
}