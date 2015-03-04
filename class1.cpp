#include <iostream>  
using namespace std;    
class point
{
private:
	double x;
	double y;
	
public:
	point(double a=0,double b=0)
	{x=a;y=b;}
	void set(double a,double b)
	{x=a;y=b;}
	void show()
	{cout<<"("<<x<<","<<y<<")"<<endl;}
};
int main()  
{  
	class point v(16,8);
	v.show();

	point *p=&v;
	p->show();
	//cin.get();
	system("PAUSE");
	return 0;
}  
C++类的使用
