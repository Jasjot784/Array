#include<iostream>
using namespace std;
int main()
{
  int arr[5];
  cout<<"enter 5 values"<<endl;
  for(int i= 0;i<5;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<4;i++)
  {
    for(int j=0;j<4;j++)
    {
      if(arr[j]>arr[j+1])
      {
        arr[j]= arr[j]+arr[j+1];
        arr[j+1]=arr[j]-arr[j+1];
        arr[j]=arr[j]-arr[j+1];
      }
      else
      continue;
    }
  }
  cout<<"values in ascending order are "<<endl;
  for(int i = 0;i<5;i++)
  {
    cout<<arr[i]<<" ";
  }
}
