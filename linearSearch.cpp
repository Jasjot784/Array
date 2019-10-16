#include<iostream>
using namespace std;
int search(int arr[],int n,int x)
{
  int i,j;
  for(i=0;i<n;i++)
  {
    if(arr[i]==x)
    return i;}
    return -1;
}

int main()
{
  int arr[]={2,3,4,10,40};
  int x=10;
  int n=5;
  int result=search(arr,n,x);

  (result==-1)?cout<<"Element is not present":cout<<"Element is present at index "<<result;
}
