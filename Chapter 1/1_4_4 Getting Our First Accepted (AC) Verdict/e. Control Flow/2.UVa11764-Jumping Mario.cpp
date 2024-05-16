//
// Created by khalid on 23/04/24.
//
# include <bits/stdc++.h>
using namespace std;
int main(){
    int tc,n, a, b, h=0, l=0, i=1;
    scanf("%d", &tc);
    while (tc--){
        scanf("%d", &n);
        scanf("%d", &a);
        n--;
        while (n--) {
            scanf("%d", &b);
            if (b>a) h++;
            if (b<a) l++;
            a = b;
        }
        printf("Case %d: %d %d\n", i++, h, l);
        a=0; b=0; h=0; l=0;
    }
    return 0;
}
