//
// Created by khalid on 08/04/24.
//
# include <bits/stdc++.h>
using namespace std;
int main(){
    int TC, i=1; scanf("%d", &TC);
    while (TC--){
        int n, k, p; scanf("%d %d %d", &n, &k, &p);
        if ((k+p)%n == 0) printf("Case %d: %d\n", i++, n);
        else printf("Case %d: %d\n", i++,(k+p)%n);
    }

}