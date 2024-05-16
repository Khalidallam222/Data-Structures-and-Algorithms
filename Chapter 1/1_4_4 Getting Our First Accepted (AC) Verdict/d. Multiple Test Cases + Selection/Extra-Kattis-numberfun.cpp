//
// Created by khalid on 23/04/24.
//
# include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    while (n--) {
        int a, b, c;
        scanf("%d%d%d", &a, &b, &c);
        if((a + b == c) || (abs(a - b) == c) || (a * b == c) || (b == c * a) || (a == c * b))
            printf("Possible\n");
        else
            printf("Impossible\n");
    }
    return 0;
}
