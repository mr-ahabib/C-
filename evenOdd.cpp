#include<iostream>
using namespace std;

int main(){

    string str;
    cin >> str;
    char num = str.back();
    int a = int(num) - 48;
        
        if(a%2==0){
            cout << "Even" << endl;
        }
        else{
            cout << "Odd" << endl;
        }

}