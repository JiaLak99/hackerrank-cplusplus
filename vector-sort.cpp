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
    int n;
    int v;
    cin >> n;
    vector<int>vec;
    
    for (int i = 1; i <= n; i++) {
        cin >> v;
        vec.push_back(v);
    }
    
    sort(vec.begin(), vec.end());
    
    for (int i = 0; i < n; i++) {
        cout << vec[i] << ' ';
    }
    return 0;
}