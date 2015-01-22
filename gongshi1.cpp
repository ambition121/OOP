    #include <iostream>  
    using namespace std;  
    int main( )  
    {   
        int i,m=1;  //m表示2的幂，1为2的0次幂，与循环相符  
        double sum=0, s=1.0; //s直接取double型，保证除的结果是浮点型  
        for(i=0;i<=8;++i)  
        {  
            sum=sum+s/m;//一楼指出的错误表达式是sum=sum+s*i/m;  
            m*=2;   //2的i次幂由此计算得到  
            s=-s;      
        }  
        cout<<"sum="<<sum<<endl;  
        return 0;  
    }  
