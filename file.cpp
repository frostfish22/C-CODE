#include<iostream>
using namespace std;
int main(){//写内容入文件
    FILE *fp;
    char ch;
    if((fp=fopen("123.txt","w"))==NULL){
        printf("cannot open file\n");
        exit(0);
    }
    ch=getchar();
    while(ch!='#'){
        fputc(ch,fp);
        ch=getchar();
    }
    fclose(fp);
    return 0;
}