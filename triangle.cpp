    #include<iostream>  
    #include<Cmath>  
    #include<cstdlib>  
    using namespace std;  
    class Triangle  
    {  
    public:  
        void setABC(double x, double y, double z);//置三边的值，注意要能成三角形  
        double perimeter();//计算三角形的周长  
        double area();//计算并返回三角形的面积  
    private:  
        double a,b,c; //三边为私有成员数据  
    };  
    int main()  
    {  
        Triangle tri1;    //定义三角形类的一个实例（对象）  
        double x, y, z;  
        cin>>x>>y>>z;  
        tri1.setABC(x, y, z);    //为三边置初值  
        cout<<"三角形的周长为："<< tri1.perimeter()<<"，面积为："<< tri1.area()<<endl; 
		system("PAUSE");
        return 0;  
    }  
      
    //在下面定义Triangle类中的各个成员函数  
    void Triangle::setABC(double x, double y, double z)  
    {  
        if(x+y>z&&x+z>y&&y+z>x)  
        {  
            a=x;  
            b=y;  
            c=z;  
        }  
        else  
        {  
            cout<<"不能构成三角形"<<endl;  
			system("PAUSE");
            exit(0);
        }  
    }  
      
      
    double Triangle::perimeter()  
    {  
        return a+b+c;  
    }  
      
    double Triangle::area()  
    {  
        double p=(a+b+c)/2;  
        return sqrt(p*(p-a)*(p-b)*(p-c));  
    }  
