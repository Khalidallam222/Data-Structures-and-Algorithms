//
// Created by khalid on 17/04/24.
//

# include <bits/stdc++.h>
using namespace std;
int main(){
    int n; scanf("%d", &n);
    while(n--){
        int x; scanf("%d", &x);
        if (x%2 == 0)
            printf("%d is even\n", x);
        else
            printf("%d is odd\n", x);
    }
    return 0;
}