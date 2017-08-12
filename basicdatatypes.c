/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    int i = 3; long l = 12345678912345; char c = 'a'; float f = 334.23; double d = 14049.30493;
    scanf("%i %ld %c %f %lf", &i, &l, &c, &f, &d);
    printf("%i\n%ld\n%c\n%.03f\n%.09lf\n", i, l, c, f, d);
    return 0;
}