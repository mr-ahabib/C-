#include <iostream>
using namespace std;

int main() {
for(int i = 1000; i >= 1; i--){
    cout << i << "  ";
        if(i % 5 == 0)
            cout << endl;
}
return 0;
}