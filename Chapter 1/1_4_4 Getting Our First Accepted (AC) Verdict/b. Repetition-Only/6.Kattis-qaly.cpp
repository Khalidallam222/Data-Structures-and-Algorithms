//
// Created by khalid on 12/04/24.
//
# include <bits/stdc++.h>
using namespace std;
int main(){
    int N; scanf("%d", &N);
    float sum = 0;
    while(N--){
        float q, y; scanf("%f %f", &q, &y);
        sum += q * y;
    }
    printf("%.3f", sum);
}