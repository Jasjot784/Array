#include<iostream>
using namespace std;
void show(int a[]);
int main()
{
  int a[]={10,20,30,40};
  show(a);
}
void show(int *p)
{
  for(int i =0;i<=3;i++)
  cout<<(*p)++<<" ";
  // or cout<<p[i]<<" ";
}
