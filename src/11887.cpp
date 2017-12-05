#include <iostream>   // 包含头文件iostream
#include <cstring>
using namespace std;  // 使用命名空间std
// start
//Engineer类的定义
class Computer {
public :
    Computer(int pId, char* pBrand, float pMainFrequency, float pHardDisk){
        this->id = pId;
        this->brand = pBrand;
        this->mainFrequency = pMainFrequency;
        this->hardDisk = pHardDisk;
        cout<<"Constructed with all parameters."<<endl;
    }
    Computer(Computer& computer){
        this->id = computer.id;
        this->brand = computer.brand;
        this->mainFrequency = computer.mainFrequency;
        this->hardDisk = computer.hardDisk;
        cout<<"Copy Constucted."<<endl;
    }
    ~Computer(){
        cout<<"Deconstructed."<<endl;
    }
    
    void printComputer ();
    void setId(int pId) {
        this->id = pId;
    }
    void setHardDisk (float pHardDisk){
        this->hardDisk = pHardDisk;
    }
    void setMainFrequency (float pMainFrequency){
        this->mainFrequency = pMainFrequency;
    }
private:
    int id;
    char* brand;
    float mainFrequency;
    float hardDisk;
};
//end
void Computer::printComputer ()
{
    cout<<"id: "<<id<<", "
		<<"brand: "<<brand<<", "
		<<"mainFrequency: "<<mainFrequency<<", "
		<<"hardDisk: "<<hardDisk<<endl;
}
int main()
{
	Computer computer1(1001,"IBM",1.8f,500.f);
	Computer computer2=computer1;
	computer2.setId(1002);
	computer2.setMainFrequency(2.f);
	computer2.setHardDisk(1000.f);
	Computer computer3= computer1;
	computer3.setId(1003);
	computer3.setMainFrequency(2.5f);
	computer3.setHardDisk(1500.f);
	Computer computer4= computer1;
	computer4.setId(1004);
	computer4.setMainFrequency(2.f);
	computer4.setHardDisk(1200.f);
	computer1.printComputer ();
	computer2.printComputer ();
	computer3.printComputer ();
	computer3.printComputer ();
	computer4.printComputer ();
	return 0;
}