#include <iostream>   // 包含头文件iostream
#include <cstring>
using namespace std;  // 使用命名空间std
class Employee
{
      public:
            Employee();
            Employee(int pId, char* pName, char pSex, char* pPosition);
            void printEmployee();
            void setSex(char pSex);
      private:
            int id;               // 学号
            char* name;      	// 姓名字符指针变量
            char sex;         	// 性别
            char* position; 	// 职位
};
//start
	//构造函数定义
Employee::Employee(){}
Employee::Employee(int pId, char* pName, char pSex, char* pPosition){
    this->id = pId;
    this->name = pName;
    this->sex = pSex;
    this->position = pPosition;
}
	//end;
inline void Employee::printEmployee()
{
  cout<<"id: "<<id<<", "<<"name: "<<name<<", "
        << "sex: "<<sex<<", "<<"position: "<<position<<endl ;
}
void Employee::setSex(char pSex='M')
{
    //start
	// 修改性别
	this->sex = pSex;
	//end;
}
int main()
{
      Employee emp(1001,"zhangxiao",'F',"manager");
      emp.printEmployee();
      emp.setSex();
      emp.printEmployee();
      return 0;
}