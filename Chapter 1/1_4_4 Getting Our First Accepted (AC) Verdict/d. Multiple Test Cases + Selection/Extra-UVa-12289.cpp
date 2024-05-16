//
// Created by khalid on 28/04/24.
//

# include <bits/stdc++.h>
using namespace std;
int main(){
    int n, c=0;
    scanf("%d", &n);
    char word[6];
    while(n--){
        scanf("%s", word);
        int len =strlen(word);
        if (len == 3){
            if(word[0] == 'o' && word[2] == 'e'
            || word[1] == 'n' && word[2] == 'e'
            || word[0] == 'o' && word[1] == 'n')
                printf("%d\n", 1);
            else
                printf("%d\n", 2);
        }
        else{
            printf("%d\n", 3);
        }
    }
    return 0;
}