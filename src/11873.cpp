#include <iostream>   // 包含头文件iostream
#include <cstring>
using namespace std;  // 使用命名空间std
  // start
//书籍Book类的定义
class Book{
    
    
public:
    Book(Book& book){
        Name = book.Name;
        Author = book.Author;
        Press = book.Press;
        NumberOfPages = book.NumberOfPages;
    }
    Book(char* pName,
        char* pAuthor,
        char* pPress,
        int pNumberOfPages){
        Name = pName;
        Author = pAuthor;
        Press = pPress;
        NumberOfPages = pNumberOfPages;
    }
    
    void setPress(char * pPress = "清华大学出版社"){
        this->Press = pPress;
    }
    
    void printBook();
    
private:
    char* Name;
    char* Author;
    char* Press;
    int NumberOfPages;

};
//部分成员函数的实现
//end
inline void Book::printBook()
{
	cout<<"Name: "<<Name<<endl<<"Author: "<<Author<<endl<<"Press: "<<Press<<endl<<"NumberOfPages: "<<NumberOfPages<<endl;
	// Book内联成员函数printBook的实现
}
int main()
{
	Book bk("微机原理与接口技术","姚琳","高等教育出版社",271);
  // start
//成员函数的调用
    bk.printBook();
    
    
    Book bk2 = bk;
    bk2.setPress();
    bk2.printBook();
//end
	return 0;
}