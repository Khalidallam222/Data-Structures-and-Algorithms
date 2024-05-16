//
// Created by khalid on 16/04/24.
//

# include <bits/stdc++.h>
using namespace std;
int main(){
    int g, s, c; scanf("%d %d %d", &g, &s, &c);
    int p = 3*g + 2*s + c;
    if (p >= 8) printf("Province or Gold");
    else if (p >= 5){
        if(p == 5) printf("Duchy or Silver");
        else printf("Duchy or Gold");
    }
    else if (p >= 2){
        if(p == 2) printf("Estate or Copper");
        else printf("Estate or Silver");
    }
    else
        printf("Copper");
    return 0;
}