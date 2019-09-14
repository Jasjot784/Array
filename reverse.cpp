#include <iostream>
using namespace std;
int main(){
  int n;
  cout<<"enter a number"<<endl;
  cin>>n;
  int arr[n];
  cout<<"enter "<<n<<" elements "<<endl;
  for(int i=0;i<n;i++)
  {
    cin>>arr[i];
  }
  for(int i = 0; i<=(n/2);i++)
  {
   int c =arr[i];
   arr[i]=arr[n-1-i];
   arr[n-1-i]=c;
  }
  cout<<"elements in reverse order are "<<endl;
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
