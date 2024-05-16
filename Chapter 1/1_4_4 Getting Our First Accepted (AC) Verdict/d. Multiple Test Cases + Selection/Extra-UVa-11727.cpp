//
// Created by khalid on 24/04/24.
// https://vjudge.net/problem/UVA-11727

# include <bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    scanf("%d", &tc);
    int a, b, c, i=1;
    while (tc--){
        scanf("%d%d%d", &a, &b, &c);
        if (a > b && a > c)
            cout<<"Case "<<i++<<": "<< (b > c? b:c) << endl;
        else if( b > a && b > c)
            cout<<"Case "<<i++<<": "<< (a > c? a:c) << endl;
        else
            cout<<"Case "<<i++<<": "<< (a > b? a:b) << endl;
    }
    return 0;
}
