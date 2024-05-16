//
// Created by khalid on 02/05/24.
//
# include <bits/stdc++.h>
using namespace std;
int main(){
    char charter;
    bool start = true;

    while(scanf("%c", &charter) != EOF){
        if (charter == '"') {
            if (start) {
                start = false;
                charter = '`';
            } else {
                charter = '\'';
                start = true;
            }
            printf("%c%c", charter, charter);
        }
        else
            printf("%c", charter);

    }
    return 0;
}

