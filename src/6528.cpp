#include<iostream>
#include<string>
using namespace std;
class student{
    //write your own codes
public:    
    student(int pid, string pname ){
        this->id = pid;
        this->name  = pname;
    }
    void getGrade(){
        for (int i = 0;i<6;i++){
            cin >> g[i];
        }
    }
    void listGrade(){
        for(int i = 0 ; i<6;i++){
            cout<<" "<<g[i];
        }
    }

    int id;
    string name;
    int g[6];
};

int main() {
	//write your own codes
	int id;
	string name;
	cin>>id>>name;
    student a(id,name);
    a.getGrade();
    cout<<a.id<<" "<<a.name;
    a.listGrade();
	return 0 ;
}
