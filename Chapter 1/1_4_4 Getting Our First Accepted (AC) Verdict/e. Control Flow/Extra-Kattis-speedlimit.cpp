//
// Created by khalid on 07/05/24.
//
# include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    while (scanf("%d", &n) != EOF && n!=-1){
        int miles_sum = 0, prev = 0;
        while (n--) {
            int s, t;
            scanf("%d%d", &s, &t);
            miles_sum += s * (t-prev);
            prev = t;
        }
        printf("%d miles\n", miles_sum);
    }
    return 0;
}