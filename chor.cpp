#include<iostream>
using namespace std;

int chorPick(int a , int b,int arr[]){

    int total=0;

    for (int i = 0; i < b; i++)
    {
        if (arr[i] <= a)
        {
            
            total = total + arr[i];
            a = a - arr[i];
        }
        }
        return total;
    }


int main(){

    int item,chor;
 int weight;
    cin >> item;
    
    int arr[item];

    for (int i = 0; i < item;i++){
        cin >> arr[i];
    }
    //cout<<"vngj";
    cin>>chor;
    
for (int j = 0; j < chor; j++){
        
        cin >> weight;
        cout<<chorPick(weight, item, arr)<<endl;
    }
}