//
//  main.cpp
//  junyi_app1
//
//  Created by 張硯琛 on 2020/5/24.
//  Copyright © 2020年 張硯琛. All rights reserved.
//

#include <iostream>
#include <string>
using namespace std;

string flipWord(string a){
    string b;
    b.resize(a.size());
    
    for (int i = 0; i < a.size(); i++) {
        b[i] = a[a.size()-i-1];
    }
    return b;
}

string flipWordinSentence(string a){
    string b;
    bool first = true;
    int j = 0;
    string buffer;
    buffer.resize(a.size());
    
    for (int i = 0; i < a.size(); i++) {
        if (a[i] == ' ') {
            buffer.resize(j);
            if (first) {
                b = flipWord(buffer);
            }
            else{
                b = b + " " + flipWord(buffer);
            }
            buffer.resize(a.size());
            j = 0;
            first = false;
        }
        else if (i == a.size()-1){
            buffer[j] = a[i];
            buffer.resize(j+1);
            b = b + " " + flipWord(buffer);
        }
        else{
            buffer[j] = a[i];
            j++;
        }
    }
    
    return b;
}


int main(int argc, const char * argv[]) {
    cout << flipWord("junyi") << endl;
    cout << flipWordinSentence("junyi is the best") << endl;
    return 0;
}
