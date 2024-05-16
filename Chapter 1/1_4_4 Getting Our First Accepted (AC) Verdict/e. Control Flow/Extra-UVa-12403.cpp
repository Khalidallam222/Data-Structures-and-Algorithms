//
// Created by khalid on 06/05/24.
//
# include <bits/stdc++.h>
using namespace std;
int main() {
    int n, sum=0;
    scanf("%d", &n);
    while (n--) {
        char operation[100];
        scanf("%s", operation);
        if (strcmp(operation, "donate")){
            printf("%d\n", sum);
        }
        else{
            int amount;
            scanf("%d", &amount);
            sum +=amount;
        }
    }
    return 0;
}