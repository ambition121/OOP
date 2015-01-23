 #include<iostream>    
using namespace std; 
void printch(char c,int m)
{
for(int j=1;j<=m;j++)
	cout<<c;

}
int main()    
{    
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
   printch(' ',n-i);
   printch('*',2*i-1);
   cout<<endl;
	}
	cin.get();
	cin.get();
    return 0;    
}   //输入n，就输出n行*号
