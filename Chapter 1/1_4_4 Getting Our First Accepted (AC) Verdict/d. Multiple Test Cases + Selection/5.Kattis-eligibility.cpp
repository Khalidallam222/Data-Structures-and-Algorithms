//
// Created by khalid on 17/04/24.
//
# include <bits/stdc++.h>
using namespace std;
int main(){
    int tc; scanf("%d", &tc);
    while(tc--){
        char name[31], studies[11], dob[11]; int courses;
        scanf("%s %s %s %d", name, studies, dob, &courses);
        printf("%s ", name);

        char year_s[5];
        strncpy(year_s, studies, 4);
        year_s[4] = '\0';
        int year1 = stoi(year_s);
        char year_d[5] ;
        strncpy(year_d, dob, 4);
        year_d[4] = '\0';
        int year2 = stoi(year_d);

        if (year1 >= 2010 || year2 >= 1991)
            printf("eligible\n");
        else if (courses > 40)
            printf("ineligible\n");
        else
            printf("coach petitions\n");
    }
    return 0;
}