//
// Created by khalid on 07/05/24.
//
# include <bits/stdc++.h>
using namespace std;
int main() {
    int n, expenses=0;
    scanf("%d", &n);
    while (n--) {
        int k;
        scanf("%d", &k);
        if (k<0) expenses +=k;
    }
    printf("%d", -expenses);
    return 0;
}
