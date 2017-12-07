/**
 * 正整数的各位数字之和被fans称为Fans数
 * 求输入数（长度<2^32）的Fans数!
 */
#include<iostream>
#include<string>
#include<cmath>
//#include<time>
using namespace std;

int main (){
    string a;
    int o=0;
    cin>> a;
    for (int i =0;i<a.length();i++){
        o += (int)a[i];
    }
    cout<< o;
    return 0;
}