#include<iostream>
#include<iomanip>
using namespace std;
int main()
{     
//start
int charnum=0;
char ch[80];
int numcount[10]={0};
int sp=0,lett=0,other=0;
//end
  	cout<<"输入字符串:"<<endl;
//start
char c;
for( charnum=0;(c = getchar())!='\n';charnum++){
    ch[charnum]=c;
    if (c==' ') sp++;
    else if (c>='a'&&c<='z'||c>='A'&&c<='Z') lett++;
    else if (c>='0'&&c<='9') numcount[c-'0'] ++;
    else other++;
    //charnum++;
}
ch[charnum]='\0';
//end
  	cout<<"输出字符串:"<<endl<<ch<<endl;
    
//start
	cout<<"统计结果为:"<<endl;
	cout<<"每个数字统计结果:" ;
 //start
 for(int i=0; i<10; i++){
     cout<< i<<":"<<numcount[i]<<", ";
 }
//end
  	cout<<"\n空格:"<< sp<<",英文字符:"<< lett <<",其它字符:"<<other<<endl;
  	return 0;
}