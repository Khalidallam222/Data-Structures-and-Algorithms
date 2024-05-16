//
// Created by khalid on 30/04/24.
//
# include <bits/stdc++.h>
using namespace std;
int main(){
    int tc, i=1;
    scanf("%d", &tc);
    while (tc--){
        int n, maximum=0;
        char dummy;
        while(scanf("%d%c", &n, &dummy) != EOF){
            maximum = max(n, maximum);
            if (dummy == '\n') break;
        }
        printf("Case %d: %d\n", i++, maximum);
    }
    return 0;
}