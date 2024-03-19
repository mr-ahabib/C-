#include<iostream>
using namespace std;

      int main(){
          int m,n;
          cin >> m;
          int arr[m];
          for (int i = 0; i < m;i++){
              cin >> arr[i];
          }

          int temp, min;

          for (int j = 0; j < m;j++){
            for (int k = j + 1; k < m;k++){
                       if(arr[j]<arr[k]){
                           temp = arr[j];
                           arr[j] = arr[k];
                           arr[k] = temp;
                       }

                }
                

          }
          cout << "after sorting " << endl;
            for (int t = 0; t < m;t++){
                    cout << arr[t] << endl;
              
            }
      }