//
// Created by khalid on 06/05/24.
//
# include <bits/stdc++.h>
using namespace std;
int main() {
    int n, i=1;
    bool make_sense = true;
    scanf("%d", &n);
    while (n--) {
        char input[10001];
        scanf("%s", input);
        if(strcmp(input, "mumble")){
            int num = atoi(input);
            if (num != i) make_sense= false;
        }
        i++;
    }
    if (make_sense)
        printf("makes sense");
    else
        printf("something is fishy");
    return 0;
}