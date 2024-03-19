#include<bits/stdc++.h>
using namespace std;

       int main(){

           int n;
           cin >> n;
           int num[n],arr[100];
            
           for (int i = 0; i < n;i++){
               cin >> num[i];
           }
           for (int t = 0; t < 100;t++){  //1 to 100 e 0 initialize korci...gurbase value jeno return na hoy
               arr[t] = 0;
           }

               for (int j = 0; j < n; j++)
               { // value antese
                   int count = 0;
                   for (int k = 0; k < n; k++)
                   { // full array travarse
                       if (num[j] == num[k])
                       { // match korle count 1 barbe
                           count++;
                       }

                   }
                   arr[num[j]] = count;  //arr er j index e koyta ase seta write korci
                   //cout << count << endl;
               }

               int z=0,temp=0;
               int arr2[100];
               for (int g = 0; g < 100; g++)
               {
                   if (arr[g] != 0)
                   {
                       cout << g << " value is " << arr[g] << endl;
                       arr2[z]=arr[g];
                      
                      z++;
                   }
                    }
                    for(int y=0;y<z;y++){
                       for (int k = y + 1; k < z;k++){
                       if(arr2[y]>arr2[k]){
                           temp = arr2[y];
                           arr2[y] = arr2[k];
                           arr2[k] = temp;
                       }

                }
                        
                         //cout<<arr2[y]<<z<<endl;
                    }
                    for(int i=0;i<z;i++){
                        for(int x=0;x<100;x++){
                            if(arr2[i]==arr[x]){
                                for(int v=0;v<arr[x];v++){
                                    cout<<x<<endl;
                                }
                            }
                        }
                         //cout<<arr2[i]<<endl;
                    }
                
               }