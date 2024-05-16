//
// Created by khalid on 06/05/24.
//

# include <bits/stdc++.h>
using namespace std;
int main(){
    int s, i=1;
    bool yes = true;
    scanf("%d", &s);
     while (s--){
        for(int j=0; j<13; j++){
            int num;
            scanf("%d", &num);
            if (num == 0){yes= false;}
        }
        if(yes)
         printf("Set #%d: Yes\n", i++);
        else
         printf("Set #%d: No\n", i++);

        yes = true;
     }

     return 0;
}