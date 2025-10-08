#include "../include/pure_num.h"

bool PureNum(int num) {
    
    if (num < 0) {
        return false;
    }

    int last = num % 10;
    num /= 10;

    if (num == 0) {
        return true;
    }
    
    while (num > 0) {
        int curr = num % 10;
        
        if (curr > last) {
            return false;
        }
        
        last = curr;
        num /= 10;
    }
    
    return true;
}