#include<iostream>
#include<string>
using namespace std;
class employee{
    public:
    employee(string pid,string pname, string ptel){
        this->id = pid;
        this->name = pname;
        this->tel = ptel;
    }
    
    string id,name,tel;
};
int main() {
	//write your own codes
	string id, name ,tel;
	cin >> id >> name >> tel;
	employee a(id,name,tel);
	
	cout<<a.id<<" "<<a.name<<" "<<a.tel<<endl;
	return 0 ;
}
