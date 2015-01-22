 #include <iostream>   
    using namespace std;  
    int main()  
    {  
        int a,b,c,count=0;  
        cout<<"小明借书给三位小朋友书的方案有："<<endl;  
        for(a=1;a<=5;a++)     //穷举a借5本书中的1本的全部情况  
            for(b=1;b<=5;b++)     //穷举b借5本书中的一本的全部情况  
                for(c=1;c<=5;c++)    //穷举c借5本书中的1本的全部情况  
                    if(a!=b&&c!=a&&c!=b) //判断三个人借的书是否不同  
                    {  
                        ++count;  
                        cout<<count<<": "<<a<<", "<<b<<", "<<c<<endl;//输出方案  
                    }  
					cin.get();
					return 0;
    }  
