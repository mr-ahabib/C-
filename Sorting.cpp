#include<bits/stdc++.h>
using namespace std;

        int main(){
            int n;
            cin >> n;
            int arr[n];
            int temp = 0;

            for (int i = 0; i < n;i++){
                cin >> arr[i];
            }
            // sort(arr, arr + n);
            // cout << "after sorting " << endl;      //using sorting function
            // for (int t = 0; t < n;t++){
            //         cout << arr[t] << endl;
            //     }   


            for (int j = 0; j < n;j++){
               // cout << arr[j] << endl;

                for (int k = j + 1; k < n;k++){
                       if(arr[j]>arr[k]){
                           temp = arr[j];
                           arr[j] = arr[k];
                           arr[k] = temp;
                       }

                }
                
            }
            cout << "after sorting " << endl;
            for (int t = 0; t < n;t++){
                    cout << arr[t] << endl;
                }
        }