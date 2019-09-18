#include<iostream>
using namespace std;
void show(int a[]);
int main()
{
  int a[]={10,20,30,40};
  show(a);
}
void show(int a[])
{
  for(int i =0;i<=3;i++)
  cout<<a[i]<<" ";
}
