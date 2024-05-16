//
// Created by khalid on 12/04/24.
//
# include <bits/stdc++.h>
using namespace std;
int main(){
    const int gridSize = 3;
    int TC; scanf("%d", &TC);
    while(TC--){
        int n, m;
        scanf("%d%d", &n, &m);

        printf("%d\n", (n / gridSize) * (m / gridSize));
    }
}