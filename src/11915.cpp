#include <iostream>   // 包含头文件iostream
#include <string>
#include <cstring>
using namespace std;  // 使用命名空间std
class People
{
public:
	// start
	
	// //根据输出结果，定义Employee类，构造函数内有输出语句
	//end	
	int id;
	string name;
	int age;
	
};
class Employee :People {
public:
	Employee() {
		cout << "Employee Constructed without any parameter.\n";
	}
	~Employee() {
		cout << "Employee Deconstructed.\n";
	}
	void setEmployee(int pid, string pname, int page) {
		this->id = pid;
		this->name = pname;
		this->age = page;
	}
	void getInfo() {
		cout << "id: " << id << ", name: " << name << ", age: " << age << endl;
	}
	
};
class BusinessManager :People
{
public:
	// start
	BusinessManager() {
		cout << "BusinessManager Constructed without any parameter.\n";
	}
	~BusinessManager() {
		cout << "BusinessManager Deconstructed.\n";
	}
	void setBusinessManager(int pid, string pname, int page) {
		this->id = pid;
		this->name = pname;
		this->age = page;
	}
	void getInfo() {
		cout << "id: " << id << ", name: " << name << ", age: " << age << endl;
	}
	
	//根据输出结果，定义BusinessManager类，构造函数内有输出语句
	//end    
};

class TechnicalManager :People
{
public:
	// start
	TechnicalManager() {
		cout << "TechnicalManager Constructed without any parameter.\n";
	}
	~TechnicalManager() {
		cout << "TechnicalManager Deconstructed.\n";
	}
	void setTechnicalManager(int pid, string pname, int page) {
		this->id = pid;
		this->name = pname;
		this->age = page;
	}
	void getInfo() {
		cout << "id: " << id << ", name: " << name << ", age: " << age << endl;
	}
	
	//根据输出结果，定义TechnicalManager类，构造函数内有输出语句
	//end
};
class Team
{
public:
	Team()
	{
		cout << "Team Constructed." << endl;
	}
	void printTeam()
	{
		bm.getInfo();
		tm.getInfo();
		// start
		//根据输出结果，各成员对象的输出语句，注意输出顺序
		for (int i = 0; i < 6;i++) {
			e[i].getInfo();
		}
		/*
		for (Employee em : e){
			em.getInfo();
		}
		*/


		//end								   ，
	}
public:
	BusinessManager bm;
	TechnicalManager tm;
	Employee e[6];
};
int main()
{
	Team t;
	t.bm.setBusinessManager(1001, "zhangsan_BM", 32);
	t.tm.setTechnicalManager(1002, "lisi_TM", 31);
	t.e[0].setEmployee(2000, "wang0_EMP", 24);
	t.e[1].setEmployee(2001, "wang1_EMP", 22);
	t.e[2].setEmployee(2002, "wang2_EMP", 23);
	t.e[3].setEmployee(2003, "wang3_EMP", 22);
	t.e[4].setEmployee(2004, "wang4_EMP", 25);
	t.e[5].setEmployee(2005, "wang5_EMP", 20);
	t.printTeam();
	return 0;
}