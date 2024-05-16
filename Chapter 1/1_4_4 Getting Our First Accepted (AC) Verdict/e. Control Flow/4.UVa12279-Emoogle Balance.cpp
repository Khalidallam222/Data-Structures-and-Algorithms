//
// Created by khalid on 30/04/24.
//
# include <bits/stdc++.h>
using namespace std;
int main(){
    int i=1, tc=1, n;
    int a=0, b=0;
    while(scanf("%d", &tc) != EOF && (tc!=0)){
        while (tc--){
            scanf("%d", &n);
            (n == 0 ? a : b)++;
        }
        printf("Case %d: %d\n", i++, b-a);
        a=0, b=0;
    }
    return 0;
}