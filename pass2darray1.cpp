#include<iostream>
using namespace std;
void show (int *);
int main()
{
  int a[][3]={1,2,3,4,5,6,7,8,9};
  show(a[0]);

}
void show(int *x)
{
  for(int i=0;i<=8;i++)
  {
    if(i==3||i==6)
    cout<<endl;
    cout<<(*x)++<<" ";

  }
}
