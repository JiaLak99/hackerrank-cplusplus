/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <string>
using namespace std;

int main() {
    string a;
    string b;
    cin >> a >> b;
    
    string c = a;
    char c0 = b[0];
    string d = b;
    char d0 = a[0];
    c[0] = c0;
    d[0] = d0;
    
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    cout << c << " " << d << endl;
    return 0;
}