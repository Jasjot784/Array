#include<iostream>
using namespace std;
void show(int);
int main()
{
  int a[]={10,20,30,40};
  for(int i = 0;i<4;i++)
  {
    show(a[i]);
  }
}
void show (int x)
{
  cout<<x<<" ";
}
