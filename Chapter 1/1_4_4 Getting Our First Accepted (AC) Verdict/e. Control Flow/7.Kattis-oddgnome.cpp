//
// Created by khalid on 02/05/24.
//
# include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    scanf("%d", &tc);
    while (tc--){
        int n, num, prev, king_idx;
        scanf("%d", &n);
        scanf("%d", &prev);
       for(int i=2; i<=n; i++){
            scanf("%d", &num);
            if (num != prev + 1) {
                king_idx = i;
            }
            prev = num;
        }
        printf("%d\n", king_idx - 1);
    }
    return 0;
}