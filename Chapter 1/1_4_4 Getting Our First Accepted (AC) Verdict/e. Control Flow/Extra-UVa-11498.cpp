//
// Created by khalid on 05/05/24.
//
# include <bits/stdc++.h>
using namespace std;
int main() {
    int tc;
    while (scanf("%d", &tc) != EOF && tc){
        int n, m;
        scanf("%d%d", &n, &m);
    while (tc--) {
        int x, y;
        scanf("%d%d", &x, &y);
        if(x>n){
            if (y>m) printf("NE\n");
            else if (y<m) printf("SE\n");
            else printf("divisa\n");
        }
        else if (x<n){
            if (y>m) printf("NO\n");
            else if (y<m) printf("SO\n");
            else printf("divisa\n");
        }
        else
            printf("divisa\n");
    }
    }
    return 0;
}