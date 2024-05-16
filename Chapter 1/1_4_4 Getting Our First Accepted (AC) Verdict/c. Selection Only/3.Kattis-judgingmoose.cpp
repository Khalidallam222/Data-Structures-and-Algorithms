//
// Created by khalid on 16/04/24.
//

# include <bits/stdc++.h>
using namespace std;
int main(){
    int l ,r; scanf("%d %d", &l, &r);
    if (l==0 && r==0) printf("Not a moose");
    else if (l==r) printf("Even %d", 2*l);
    else printf("Odd %d", 2 * max(l,r));
    return 0;
}