#include<iostream>
using namespace std;
int main()
{
	int *p,n,j,c=2;
	cout<<"enter the value of n"<<endl;
	cin>>n;
	p=new int[n];
	p[0]=2;
	for(int i=3;i<100;i++)//this program is not correct
	{
		for(j=2;j<i;j++)
		{
			while(c<=n)
			{
		if(i%j==0)
        break;
if(i%j!=0)
{
 p[(c-1)]=i;
 c++;
break;

			}break;	}
			if(i%j==0)
        break;
			if(i%j!=0)
				break;
		}  //cnt.tech
	}cout<<"array of first"<<n<<" prime is = "<<endl;
	for(int i=0;i<n;i++)
		cout<<p[i]<<" ";

}
