//
// Created by khalid on 14/05/24.
//
# include <bits/stdc++.h>
using namespace std;
int main(){
    int s0, s1, r0, r1;
    // stop when both integers are 0
    while (scanf("%d %d %d %d", &s0, &s1, &r0, &r1), (s0 || s1 || r0 || r1)){
        if(s0 == s1){
            if(r0 == r1) {
                if (s0*s1 > r0*r1)
                    printf("Player 1 wins.\n");
                else if (s0*s1 < r0*r1)
                    printf("Player 2 wins.\n");
                else
                    printf("Tie.\n");
            }
            else if (r0*r1 == 2)
                printf("Player 2 wins.\n");
            else
                printf("Player 1 wins.\n");
        }
        else if (r0 == r1){
            if(s0*s1 == 2)
                printf("Player 1 wins.\n");
            else
                printf("Player 2 wins.\n");

        }
        else{
            int s = max(s1, s0)*10 + min(s1, s0);
            int r = max(r1, r0)*10 + min(r1, r0);
            if(s > r)
                r!=21? printf("Player 1 wins.\n"): printf("Player 2 wins.\n");
            else if (s < r)
                s!=21? printf("Player 2 wins.\n"): printf("Player 1 wins.\n");
            else
                printf("Tie.\n");
        }
    }

    return 0;
}