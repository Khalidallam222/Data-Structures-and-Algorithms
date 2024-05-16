//
// Created by khalid on 16/04/24.
//

# include <bits/stdc++.h>
using namespace std;
int main(){
    int x, y; scanf("%d %d", &x, &y);
    if (x>0 && y>0) printf("%d" , 1);
    if (x<0 && y>0) printf("%d" , 2);
    if (x<0 && y<0) printf("%d" , 3);
    if (x>0 && y<0) printf("%d" , 4);
    return 0;
}