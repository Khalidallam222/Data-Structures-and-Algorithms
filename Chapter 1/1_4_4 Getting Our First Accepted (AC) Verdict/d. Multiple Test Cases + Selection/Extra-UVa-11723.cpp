//
// Created by khalid on 24/04/24.
// https://vjudge.net/problem/UVA-11723

# include <bits/stdc++.h>
using namespace std;
int main(){
    int r,n, i=1;
    while(scanf("%d%d", &r, &n) && (r || n)){
        if (n + 26 * n < r ) printf("Case %d: impossible\n", i++);
        else{
            int res = ceil(static_cast<double>(r)/n) - 1;
            printf("Case %d: %d\n", i++, res);
        }
    }
    return 0;
}
