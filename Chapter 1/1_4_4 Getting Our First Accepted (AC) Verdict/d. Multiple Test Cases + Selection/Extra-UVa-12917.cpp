//
// Created by khalid on 28/04/24.
//

# include <bits/stdc++.h>
using namespace std;
int main(){
    int p, h, o;
    while(scanf("%d%d%d", &p, &h, &o) != EOF) {
        if (o - h >= p)
            printf("Props win!\n");
        else
            printf("Hunters win!\n");
    }
    return 0;
}