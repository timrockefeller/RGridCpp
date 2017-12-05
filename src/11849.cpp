#include <iostream>   // 包含头文件iostream
#include <cstring>
using namespace std;  // 使用命名空间std
class Course
{
 public:
     // start
    // 成员函数定义
    Course();
    Course(int pId, char* pName, int pHours, char* pTeacherInCharge);
    void setCourse(int pId, char* pName, int pHours, char* pTeacherInCharge);
    ~Course();
    void printCourse();
	// end
private:
      int id;
      char* name;
      int hours;
      char* teacherInCharge;
};
Course::Course()
      {
            cout<<"Constructed without Parameters."<<endl;
      }
Course::Course(int pId, char* pName, int pHours, char* pTeacherInCharge)
{
    // start
	// 为数据成员赋值
	this->id = pId;
	this->name = pName;
	this->hours = pHours;
	this->teacherInCharge = pTeacherInCharge;
	// end
      cout<<"Constructed with Parameters."<<endl;
}
void Course::setCourse(int pId, char* pName, int pHours, char* pTeacherInCharge)
{
     // start
	// 为数据成员赋值
	this->id = pId;
	this->name = pName;
	this->hours = pHours;
	this->teacherInCharge = pTeacherInCharge;
	// end
}
Course::~Course()
{
    /*
      //delete[] this->name;
      int nlen,tlen;
      for(nlen=0;name[nlen]!=0;nlen++);
      for(int i = 0; i<nlen; i++) delete name[i];
      //delete[] this->teacherInCharge;
      for(tlen=0;teacherInCharge[tlen]!=0;tlen++);
      for(int i = 0; i<tlen; i++) delete teacherInCharge[i];
    */
      cout<<"Deconstructed."<<endl;
}
void Course::printCourse()
{
  cout<<"id: "<<id<<", "
        <<"name: "<<name<<", "
        << "hours: "<<hours<<", "
        << "teacherInCharge: "<<teacherInCharge
        <<endl ;        
}
int main()
{
      Course c[3];
      c[0].setCourse(1001,"高等数学",56,"zhangsan");
      c[1].setCourse(1002,"C++程序设计",64,"lisi");
      c[2].setCourse(1003,"管理学基础",48,"wangwu");
      Course* pCourse=new Course(1004,"数据结构",72,"zhaoliu");
      c[0].printCourse();
      c[1].printCourse();
      c[2].printCourse();
      pCourse->printCourse();
      delete pCourse;
      return 0;
}