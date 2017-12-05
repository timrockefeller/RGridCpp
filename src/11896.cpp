#include <iostream>   // 包含头文件iostream
#include <cstring>
#include <string>
using namespace std;  // 使用命名空间std
//start
//Manager类的定义
class Manager{
    public:
    Manager(int pid, string pname,int page){
        id = pid;
        name = pname;
        age = page;
        cout<<"Constructed with all parameters.\n";
    }
    ~Manager(){
        cout<<"Deconstructed.\n";
    }
    int id,age;
    string name;
};
//end
/*
void printManager(Manager & m){
    cout<<"id: "<<m.id<<", name: "<<m.name<<", age: "<<m.age<<endl;
}
*/
auto printManager = [&](Manager& m){
    cout<<"id: "<<m.id<<", name: "<<m.name<<", age: "<<m.age<<endl;
};
int main()
{
      Manager m1(1001,"zhangsan",22);
      printManager(m1);
      return 0;
}