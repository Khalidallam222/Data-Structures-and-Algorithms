//
// Created by khalid on 14/05/24.
//
# include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long p, r, f;
        scanf("%lld%lld%lld", &p, &r, &f);
        int count = 0;
        while (p <= f){
            count ++;
            p = p*r;
        }
        printf("%d\n", count);
    }
    return 0;
}