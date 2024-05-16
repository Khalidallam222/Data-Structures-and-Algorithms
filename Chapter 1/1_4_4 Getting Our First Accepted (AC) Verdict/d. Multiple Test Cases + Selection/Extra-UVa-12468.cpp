//
// Created by khalid on 28/04/24.
//
# include <bits/stdc++.h>
using namespace std;
int main(){
    int a, b;
    while (scanf("%d%d", &a, &b), (a != -1) && (b != -1)) {
        printf("%d\n", min(abs(b-a), (min(a,b)+99-max(a,b)+1)));
    }
    return 0;
}
