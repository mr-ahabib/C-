#include<iostream>
using namespace std;

int LinearSearch(int arr[],int n,int key){
    for(int i=0;i<n;i++){
        if(arr[i]==key){
            cout<<"index: "<<endl;
            return i;
        }
    }
    return -1;
}
   


   int main(){
    int n,key;
    cout<<"size: "<<endl;
    cin>>n;
    int arr[n];
    cout<<"input array: "<<endl;
     for(int i=0;i<n;i++){
        cin>>arr[i];
     }
      
      cout<<"key: "<<endl;
      cin>>key;
    
    cout<<LinearSearch(arr,n,key);

   }