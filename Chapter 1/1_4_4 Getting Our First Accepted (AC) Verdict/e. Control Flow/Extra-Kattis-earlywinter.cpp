//
// Created by khalid on 07/05/24.
//
# include <bits/stdc++.h>
using namespace std;
int main() {
    int n, dm, j=-1;
    bool flag = true;
    scanf("%d%d", &n, &dm);

    for(int i=0; i<n; i++){
        int d;
        scanf("%d", &d);
        if (d <= dm && flag) { j = i; flag= false;}

    }
    j == -1 ? printf("It had never snowed this early!") : printf("It hadn't snowed this early in %d years!", j);

    return 0;
}