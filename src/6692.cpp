#include<iostream>
using namespace std;

//write the class here
class CTime{
public:
    CTime(int ph,int pm,int ps){
        int overh=0,overm=0;
        while(ps>=60){
            ps-=60;
            overm++;
        }
        s = ps;
        pm += overm;
        while(pm>=60){
            pm-=60;
            overh++;
        }
        m = pm;
        h = ph+overh;
    }
    void SetMinute(int pm){m = pm;}
    void SetSecond(int ps){s = ps;}
    void SetHour(int ph){h = ph;}
    int GetMinute(){return m;}
    int GetHour(){return h;}
    int GetSecond(){return s;}
    void PrintTime(){cout << this->GetHour() << ":" << this->GetMinute() << ":" << this->GetSecond() << endl;}
private:
    int h;
    int m;
    int s;
};

int main()
{
    int h,m,s;
	cin >> h >> m >> s;
	CTime t(h,m,s);
	t.PrintTime();
	t.SetHour(10);
	t.PrintTime();
	t.SetMinute(40);
	t.PrintTime();
	t.SetSecond(59);
	t.PrintTime();
	cout << t.GetHour() << ":" << t.GetMinute() << ":" << t.GetSecond() << endl;
	return 0;
}