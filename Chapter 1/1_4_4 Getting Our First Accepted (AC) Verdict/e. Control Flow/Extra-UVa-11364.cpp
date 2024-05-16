//
// Created by khalid on 05/05/24.
//
# include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, pos;
        scanf("%d", &n);
        int maxi=0;
        int mini=100;
        while (n--){
            scanf("%d", &pos);
            maxi = max(pos, maxi);
            mini = min(pos, mini);
        }
        printf("%d\n", 2*(maxi-mini));
    }
    return 0;
}