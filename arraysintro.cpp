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
    int a;
    cin >> a;
    int array[a];
    
    for (int i = 0; i < a; i++) {
        cin >> array[i];
    }
    for (int j = a; j > 0; j--) {
        cout << array[j - 1] << " ";
    }
    return 0;
}