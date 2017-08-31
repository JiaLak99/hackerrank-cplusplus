/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    vector<int>v;
    int n;
    cin >> n;
    int x;
    int q;
    int y;
    
    for (int i = 0; i < n; i++) {
        cin >> x;
        v.push_back(x);
    }
    
    cin >> q;
    for (int 0 = 1; i < q; i++) {
        cin >> y;
        low = lower_bound (v.begin(), v.end(), y);
        if (v[low - v.begin()] == y) {
            cout << "Yes " << (low - v.begin() + 1) << endl;
        } else {
            cout << "No " << (low = v.begin() + 1) << endl;
        }
    }
    return 0;
}