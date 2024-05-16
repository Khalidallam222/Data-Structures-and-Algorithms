//
// Created by khalid on 28/04/24.
//
# include <bits/stdc++.h>
using namespace std;
int main(){
    char word[6];
    int i=1;
    while (scanf("%s", word), strcmp(word, "*")) {
        if (!strcmp(word, "Hajj"))
        printf("Case %d: Hajj-e-Akbar\n", i++);
        else
        printf("Case %d: Hajj-e-Asghar\n", i++);
    }
    return 0;
}