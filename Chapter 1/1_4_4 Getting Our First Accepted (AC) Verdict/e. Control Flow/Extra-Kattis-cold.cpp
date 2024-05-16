//
// Created by khalid on 07/05/24.
//
# include <bits/stdc++.h>
using namespace std;
int main() {
    int n, i=0;
    scanf("%d", &n);
    while (n--) {
        int t;
        scanf("%d", &t);
        if (t<0) i++;
    }
    printf("%d", i);
    return 0;
}