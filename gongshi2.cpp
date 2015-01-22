    #include <iostream>  
    using namespace std;  
    int main( )  
    {   
        int i,f=1;  //f表示加数分母上的阶乘，初值1为1的阶乘  
        double sum=0, s=1.0; //s直接取double型，保证除的结果是浮点型  
        for(i=1;i<=9;++i)  
        {  
            f*=i;   //计算得到i的阶乘  
            sum=sum+s/f;//1楼指出的错误表达式是sum=sum+s*i/f;  
            s=-s;      
        }  
        cout<<"sum="<<sum<<endl;  
        return 0;  
    }  
