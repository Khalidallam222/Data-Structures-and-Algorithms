//
// Created by khalid on 06/05/24.
//
# include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    bool y= true;
    scanf("%d", &n);
    while (n--) {
        int prev;
        scanf("%d", &prev);
        for (int i=1; i<5; i++){
            int cur;
            scanf("%d", &cur);
            if (abs(cur - prev) !=1)
                y= false;
            prev=cur;
        }
        if (y)
            printf("Y\n");
        else
            printf("N\n");
        y= true;
    }
    return 0;
}