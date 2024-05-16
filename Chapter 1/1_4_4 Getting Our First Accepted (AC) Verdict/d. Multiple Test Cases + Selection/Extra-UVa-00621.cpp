//
// Created by khalid on 23/04/24.
// https://www.eecs.qmul.ac.uk/~pbo/ACM/archive/00621.html

# include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    scanf("%d", &n);
    char s[2000];
    while (n--) {
        scanf("%s", s);
        int lenght = strlen(s);
        if (strcmp(s, "1")==0 || strcmp(s, "4")==0 || strcmp(s, "78")==0) printf("+\n");
        else if ( s[lenght-2] == '3'&& s[lenght-1] == '5') printf("-\n");
        else if ( s[0] == '1'&& s[1] == '9' && s[2] == '0') printf("?\n");
        else if (s[0] == '9' && s[lenght-1] == '4' && lenght>2) printf("*\n");
        else printf("+\n");

    }
    return 0;
}
