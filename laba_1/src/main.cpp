#include <iostream>
using namespace std;


#include "../include/pure_num.h"

int main() {
    int num;
    
    cout << "введите число: ";
    cin >> num;
    
    if (PureNum(num)) {
        cout << "число чистое" << endl;
    } else {
        cout << "число не чистое" << endl;
    }
    
    return 0;
}