//
// Created by khalid on 12/04/24.
//

# include <bits/stdc++.h>
using namespace std;
int main(){
    int t, n;
    scanf("%d", &t);
    while(t--) {
        scanf("%d", &n);
        int x = (n*63+7492)*5-498;
        if (x < 0) x = x * -1;
        printf("%d\n", x/10%10);
    }
    return 0;
}