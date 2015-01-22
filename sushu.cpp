    #include <iostream>   
    using namespace std;  
    int main()  
    {
		int i,k;
		for(i=0;i<=1000;i++)
		{
			for(k=2;k<i;k++)
				if(i%k == 0)
					break;
			if(k == i)
				cout<<i<<endl;
		}
       
					cin.get();
					return 0;
    }  
