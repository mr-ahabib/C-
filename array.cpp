#include<iostream>
using namespace std;

int main(){

    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout << "Outputs are= " << endl;
    for (int j = 0; j < n; j++){
        cout << arr[j]<<endl;
    }
    return 0;
}