#include<iostream>
using namespace std;
int main()
{
  int arr[5];
  cout<<"enter any 5 elements"<<endl;
  for(int i=0;i<5;i++)
  {
    cin>>arr[i];
  }
  int larg = arr[0];
  for(int i=1;i<5;i++)
  {
    if(arr[i]>larg)
    larg=arr[i];
    else
    continue;
  }
  cout<<"largest of all is "<<larg<<endl;
}
