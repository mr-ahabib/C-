#include<iostream>
using namespace std;

        int LinearSearch(int arr[],int n,int key){

            for (int i = 0; i < n; i++) {
        arr[arr[i] % key]
            = arr[arr[i] % key] + key;
    }
            for (int i = 0; i < n;i++){
                if(arr[i]>=key){
                   cout << "True" << endl; 
                   break;
                }
                else{
                cout << "False" << endl;
            }
                
            }
            
            
            
        }

        int main(){
            int n;
            cout << "Size: " << endl;
            cin >> n;

            cout << "Input arrays: " << endl;
            int arr[n];

            for (int i = 0; i < n;i++){
                cin >> arr[i];
            }
            int key;
            cout << "Search key: " << endl;
            cin >> key;

            cout << LinearSearch(arr, n, key) << endl;

            return 0;
        }