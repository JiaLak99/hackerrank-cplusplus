/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int a;
    int b;
    cin >> a >> b;
    string numbers[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
          
    for(int i = a; i <= b; i++) {
        if (i <= 9) {
            cout << numbers[i] << endl;
        } else if ((i > 9) && (i % 2 == 0)) {
            cout << "even" << endl;
        } else {
            cout << "odd" << endl;
        }
    }
    
    return 0;
}