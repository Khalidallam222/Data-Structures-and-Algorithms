//
// Created by khalid on 23/04/24.
//
# include <bits/stdc++.h>
using namespace std;
int main(){
    int n, c=1;
    while (scanf("%d", &n) != EOF){
        int max = -1000000;
        int min = 1000000;
        while (n--){
            int i; scanf("%d", &i);
             if (i>max) max = i;
             if (i<min) min = i;
        }
        printf("Case %d: %d %d %d\n", c++, min, max, max-min);
    }
    return 0;
}
