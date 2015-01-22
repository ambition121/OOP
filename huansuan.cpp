    #include<iostream>  
    #include<iomanip>   //用于支持格式控制  
    using namespace std;  
    int main()  
    {  
        int i,j; //i,j用作计数，整型最好  
        double vij; //vij用小数，用成int自找苦吃  
          
        // (1)输出第一行;  
        cout<<"I2M\t";  
        for(i=0;i<=8;i++)  
            cout<<i<<"\t";  
        cout<<endl; //为下面的工作先做点贡献，保证以后的输出从新的一行开始  
          
        //(2)输出后面的10行;  
        for(i=0;i<=8;i++) //前面的i的使命已经完成，在此可以挪作他用，但必须赋好初值  
        {   
            cout<<i<<"\t";   //输出行号  
            cout<<setprecision(4);  //设置输出精度为4  
            for(j=0;j<=8;j++)  
            {  
                vij=(i*10+j)/3.28;  
                cout<<vij<<"\t";    
            }  
            cout<<endl;  
        }  
		cin.get();
        cout<<"不容易吗？ 要头脑清楚地做，别碰运气。"<<endl;  
    }  
