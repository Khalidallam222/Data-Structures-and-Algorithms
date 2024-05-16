//
// Created by khalid on 16/04/24.
//

# include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y; scanf("%d %d", &x, &y);
    if (y == 1 && x == 0) printf("ALL GOOD");
    else {
        if (y == 1) {
            printf("IMPOSSIBLE");
        } else {
            printf("%.6f", (double) x / (1 - y));
        }
    }
    return 0;
}
