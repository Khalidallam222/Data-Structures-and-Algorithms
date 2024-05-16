//
// Created by khalid on 02/05/24.
//
# include <bits/stdc++.h>
using namespace std;
int main(){
    int n, num, min=1000000000, min_idx;
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        scanf("%d", &num);
        if (num<min) {min = num; min_idx = i;}
    }
    printf("%d", min_idx);
    return 0;
}