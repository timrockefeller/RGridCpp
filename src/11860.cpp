#include <iostream> 
#include <cmath>
using namespace std; 
// start
//三角形Triangle类的定义
class Triangle {
public:
    Triangle(int pa,int pb, int pc ){
        if(pa+pb>pc && pa+pc>pb &&pb+pc>pa){
        a= pa;b = pb; c = pc;cout<<"这3条边构成三角形\n";}else{
            a= b= c= 0;cout<<"这3条边不构成三角形\n";}
    }
    float getArea(){
        float p=(a + b + c + 0.0)/2.0;
        return sqrt(1.0 * p * (p - a + 0.0) * (p - b + 0.0) * (p - c + 0.0));
    }
    
private:
    int a;
    int b;
    int c;
};
//end
int main()
{
    Triangle t1(3,4,5);
	cout<<"三边长分别为3,4,5"<<"三角形的面积为: "<<t1.getArea()<<endl;
    Triangle t2(1,1,3);
	cout<<"三边长分别为1,1,3"<<"三角形的面积为: "<<t2.getArea()<<endl;
	return 0;
}