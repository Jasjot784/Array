#include<iostream>
using namespace std;
int main()
{
  int n;
  cout<<"enter an integer"<<endl;
  cin>>n;
  int arr[n];
  cout<<"enter"<<n<<" values"<<endl;
  for(int i= 0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i=0;i<n;i++)
  {
    for(int j=(i+1);j<=(n-1);j++)
    {
      if(arr[i]>arr[j])
      {
        arr[i]= arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];
      }
      else
      continue;
    }
  }
  for(int i=0;i<(n-1);i++)
  {
    if(arr[i]==arr[i+1])
    {
      for(int j=i+1;j<(n-1);j++)
      {
        arr[j]=arr[j+1];
      }i--;
      n--;
    }else
    continue;
  }
  cout<<"array after deleting duplicate elements"<<endl;
  for(int i=0; i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
