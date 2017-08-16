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
    int n, q, size, value, number, index;
    cin >> n >> q;
    
    vector<vector<int>> avec;
    
    for (int i = 0; i < n; i++) {
        cin >> size;
        vector<int> bvec;
        
        for (int j = 0; j < size; j++) {
            cin >> value;
            bvec.push_back(value);
        }
        avec.push_back(bvec);
    }
    
    for (int k = 0; k < q; k++) {
        cin >> number >> index;
        cout << avec[number][index] << endl;
    }
    return 0;
}
