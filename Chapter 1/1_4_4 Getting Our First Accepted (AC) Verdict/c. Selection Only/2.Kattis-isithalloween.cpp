//
// Created by khalid on 14/04/24.
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    char mon[5];
    int n;
    scanf("%s %d", mon, &n);
    if (!strcmp(mon, "OCT") && n == 31 || !strcmp(mon, "DEC") && n == 25) {
        printf("yup");
    } else {
        printf("nope");
    }
    return 0;

}