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
    vector<int>vec;
    int n;
    cin >> n;
    int v;
    int x;
    int a;
    int b;
    
    for (int i = 0; i < n; i++) {
        cin >> v;
        vec.push_back(v);
    }
    
    cin >> x >> a >> b;
    vec.erase(vec.begin() + x - 1);
    vec.erase(vec.begin() + a - 1, vec.begin() + b - 1);
    cout << vec.size() << endl;
    
    for (int i = 0; i < vec.size(); i++) {
        cout << vec[i] << ' ';
    }
    return 0;
}