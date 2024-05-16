//
// Created by khalid on 14/05/24.
//
# include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int prev, cur, import=0;
        scanf("%d", &prev);
        while (scanf("%d", &cur) && cur){
            if( cur > 2 * prev) import+= cur - 2 * prev;
            prev = cur;
        }
        printf("%d\n", import);
    }
    return 0;
}