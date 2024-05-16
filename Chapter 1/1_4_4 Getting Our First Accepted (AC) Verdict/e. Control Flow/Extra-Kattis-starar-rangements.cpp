//
// Created by khalid on 12/05/24.
//
# include <bits/stdc++.h>
using namespace std;
int main() {
    int s;
    scanf("%d", &s);
    printf("%d:\n", s);
    for (int i = 1; i <= ceil(s / 2); i++) {
        int y=i, x=y;
        if (i>1) {
            for (int b = 1; b < ceil(s / 2); b++) {
                if ((b * x + b * y == s) || ((b + 1) * x + b * y == s))
                    printf("%d,%d\n", x, y);
            }
        }
        x = y+1;
        for (int b=1; b<= ceil(s / 2); b++){
            if((b*x + b*y == s) || ((b+1)*x + b*y == s))
                printf("%d,%d\n", x, y);
        }
        }


    return 0;
}