//
// Created by khalid on 06/05/24.
//
# include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    while(scanf("%d", &t) != EOF){
        int res = 0;
    for (int i=0; i<5; i++){
        int type;
        scanf("%d", &type);
        if (type==t){
            res +=1;
        }
    }
        printf("%d\n", res);
    }
    return 0;
}
