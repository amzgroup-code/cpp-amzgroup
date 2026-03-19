#include <iostream>
using namespace std;
/////BY AMZ GROUP
int main() {
    int num;

    cout << "Enter a number: " <<endl;
    cin >> num;

    for(int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << num * i << endl;
    }

    return 0;
}
