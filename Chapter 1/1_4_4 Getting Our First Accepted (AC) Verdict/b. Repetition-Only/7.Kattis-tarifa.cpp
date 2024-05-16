//
// Created by khalid on 14/04/24.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int x,n; scanf("%d %d", &x, &n);
    int sum = x;
    while(n--){
    int p; scanf("%d", &p);
    sum += x - p;
    }
    printf("%d", sum);
    return 0;
}