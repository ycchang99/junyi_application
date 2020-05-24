//
//  main.cpp
//  junyi_app2
//
//  Created by 張硯琛 on 2020/5/24.
//  Copyright © 2020年 張硯琛. All rights reserved.
//

#include <iostream>
using namespace std;

int countNum(int a){
    int b = 0;
    
    for (int i = 1; i <= a; i++) {
        if (i%15 == 0) {
            b++;
        }else if (i%3 !=0 && i%5!= 0){
            b++;
        }
    }
    
    return b;
}

int main(int argc, const char * argv[]) {
    cout << countNum(15) << endl;
    return 0;
}
