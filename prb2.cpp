#include<bits/stdc++.h>
using namespace std;
int main(){

 int n;
 int temp = 0;
           cin >> n;
           int num[n];
           for (int i = 0; i < n;i++){
               int a;
               cin >>a;
               int b=a * a ;
               num[i] = b;
           }
           for (int i = 0; i < n;i++){

            for (int k = i + 1; k < n;k++){
                       if(num[i]>num[k]){
                           temp = num[i];
                            num[i] =  num[k];
                           num[k] = temp;
                       }

                }
               //cout << num[i] << endl;
           }
           for (int i = 0; i < n;i++){
            cout << num[i] << endl;
           }
}