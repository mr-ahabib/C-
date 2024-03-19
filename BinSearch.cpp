#include<iostream>
using namespace std;

    int BinSearch(int arr[],int n,int key){
        int low = 0;
        int high = n;
        

        while(low<=high){
            int mid = (low + high) / 2;
                if(arr[mid]==key){
                    return mid;
                    
                }
                else if(arr[mid]>key){
                    high= mid - 1;
                }
                else if(arr[mid]<key){
                    low= mid + 1;
                }
        }
    }
    int main(){
        int n,i;
        cout << "size" << endl;
        cin >> n;
        int arr[n];

        for (i = 0; i < n;i++){
            cin >> arr[i];
        }
        int key;
        cout << "Key" << endl;
        cin >> key;

        cout << BinSearch(arr, n, key) << endl;
    

        return 0;
    }