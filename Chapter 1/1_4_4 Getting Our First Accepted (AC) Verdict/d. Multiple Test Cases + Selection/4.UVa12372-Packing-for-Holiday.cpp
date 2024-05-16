//
// Created by khalid on 17/04/24.
//
# include <bits/stdc++.h>
using namespace std;
int main(){
    int t, i=0; scanf("%d", &t);
    while(t--){
        int l,w,h;scanf("%d%d%d", &l, &w, &h);
        if (l<=20 && w<=20 && h<=20) printf("Case %d: good\n", ++i);
        else printf("Case %d: bad\n", ++i);
    }
    return 0;
}