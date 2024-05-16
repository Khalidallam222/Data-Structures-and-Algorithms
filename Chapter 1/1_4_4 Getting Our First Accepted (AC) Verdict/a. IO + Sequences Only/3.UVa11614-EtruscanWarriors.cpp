//
// Created by khalid on 07/04/24.
//

#include <bits/stdc++.h>
using namespace std;

int main() {
    int TC;
    scanf("%d", &TC); // Read the number of test cases
    while(TC--) {
        long int n, row;
        scanf("%ld", &n); // Read the number of Etruscan warriors
        row = (sqrt(1 + 8 * n) - 1) / 2;
        printf("%ld\n", row); // Calculate and print the number of rows
    }
    return 0;
}
