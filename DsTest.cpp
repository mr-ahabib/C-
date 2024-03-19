#include<bits/stdc++.h>
using namespace std;
int main()
{
  int a,n,pos;int total=1;
  int arr[a];
  cin>>a;
  for(int i=0;i<a;i++){
      cin >> arr[i];
  }
  for(int i=0;i<a;i++){
    pos=i;
    for(int j=i+1;j<a;j++){
        if(arr[pos]<arr[j]){
            pos=j;
        }

            int temp=arr[pos];
            arr[pos]=arr[i];
            arr[i] = temp;
    }
  }
  cin >> n;

  for(int i=0;i<n;i++){
       total=total*(arr[i]);
      cout << arr[i] << endl;
  }
  cout <<"Total="<< total;
}
