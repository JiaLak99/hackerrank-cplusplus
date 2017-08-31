/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    set<int>s;
    int q;
    cin >> q;
    int y;
    int x;
    
    for (int i = 0; i < q; i++) {
        cin >>y;
        cin >>x;
        if (y == 1) {
            s.insert(x);
        } else if (y == 2) {
            s.erase(x);
        } else {
            if (s.find(x) != s.end()) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    return 0;
}