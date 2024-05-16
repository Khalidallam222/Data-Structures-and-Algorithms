//
// Created by khalid on 05/05/24.
//
# include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    while (n--) {
        int f;
        scanf("%d", &f);
        int sum = 0;
        while (f--){
            int a,b,c;
            scanf("%d%d%d", &a, &b, &c);
            sum += a * c;
        }
        printf("%d\n", sum);
    }
    return 0;
}