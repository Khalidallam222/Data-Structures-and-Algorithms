//
// Created by khalid on 17/04/24.
//
# include <bits/stdc++.h>
using namespace std;
int main(){
    int i=0;
    char word[14];
    scanf("%s", word);
    while (strcmp(word, "#") != 0 ){
        if (!strcmp(word, "HELLO")) printf("Case %d: ENGLISH\n", ++i);
        else if (!strcmp(word, "HOLA")) printf("Case %d: SPANISH\n", ++i);
        else if (!strcmp(word, "HALLO")) printf("Case %d: GERMAN\n", ++i);
        else if (!strcmp(word, "BONJOUR")) printf("Case %d: FRENCH\n", ++i);
        else if (!strcmp(word, "CIAO")) printf("Case %d: ITALIAN\n", ++i);
        else if (!strcmp(word, "ZDRAVSTVUJTE")) printf("Case %d: RUSSIAN\n", ++i);
        else printf("Case %d: UNKNOWN\n", ++i);
        scanf("%s", word);
    }
    return 0;
}
