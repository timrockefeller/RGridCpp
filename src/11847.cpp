#include <iostream>       // 包含头文件iostream
#include <cmath>
using namespace std;  	// 使用命名空间std
const double PI = 3.14; //精髓
class Circle
{
public:
     //start
	 //成员函数
	 Circle(int pX,int pY,int pR);
	 float getArea();
	 int getQuadrant();
     //end
private:
	int x;//x坐标
	int y;//y坐标
	int r;//半径
};
Circle::Circle(int pX,int pY,int pR)
{
      //start
	 //构造函数完成对成员数据的赋值
	 this->x = pX;
	 this->y = pY;
	 this->r = pR;
     //end
}
float Circle::getArea()
{
	//start
	 //计算员面积
	 return pow(this->r,2) * PI;
     //end
}
int Circle::getQuadrant()
{
     //start
	 //判断圆心在那个象限
	 if(x>0){
	     if(y>0) return 1;
	     else return 4;
	 }else{
	     if(y>0)return 2;
	     else return 3;
	 }
     //end
}
int main()
{
	Circle c1(20,30,5);
	Circle c2(-20,40,30);
	cout<<"第一个圆的面积为: "<<c1.getArea()<<endl;
	cout<<"第一个圆圆心所在象限为: "<<c1.getQuadrant()<<endl;
	cout<<"第二个圆的面积为: "<<c2.getArea()<<endl;
	cout<<"第二个圆圆心所在象限为: "<<c2.getQuadrant()<<endl;
	return 0;
}