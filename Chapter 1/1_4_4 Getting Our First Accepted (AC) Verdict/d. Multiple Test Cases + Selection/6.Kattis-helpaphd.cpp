//
// Created by khalid on 22/04/24.
//

# include <bits/stdc++.h>
using namespace std;
int main(){
    int n; scanf("%d", &n);
    while(n--){
        string prob;
        cin >> prob;
        if (prob[0]=='P') printf("skipped\n");
        else{
            int pos1 = prob.find('+');
            int pos2 = prob.length();
            string string_a = prob.substr(0, pos1);
            string string_b = prob.substr(pos1+1, pos2-1 - pos1);
            int a = stoi(string_a), b = stoi(string_b);
            cout << a + b << endl;
        }
    }
    return 0;
}
//
//int main() {
//    int n;
//    scanf("%d", &n);
//    while (n--) {
//        char prob[100];
//        scanf("%s", prob);
//        if (prob[0] == 'P')
//            printf("skipped\n");
//        else {
//            int pos1 = strchr(prob, '+') - prob;
//            int a = atoi(&prob[0]);
//            int b = atoi(&prob[pos1 + 1]);
//            printf("%d\n", a + b);
//        }
//    }
//    return 0;
//}

/*
 *
strchr(prob, '+') searches for the occurrence of the '+' character in the prob character array and returns a pointer to the location where the '+' character is found.

strchr(prob, '+') - prob calculates the difference between the memory address pointed to by strchr(prob, '+') and the base address of the prob array (which is prob itself). This difference corresponds to the offset of the '+' character in the prob array. Essentially, this calculation finds the index of the '+' character.

int a = atoi(&prob[0]) converts the initial portion of the prob array (from the beginning till the '+' character) to an integer using the atoi() function. This obtains the integer value represented by the first operand.

int b = atoi(&prob[pos1 + 1]) skips the first operand and the '+' character and retrieves the second operand using pointer arithmetic. Starting from the position immediately following the '+' character (index pos1 + 1), it reads the consecutive elements in the prob array and converts them to an integer using the atoi() function. This obtains the integer value represented by the second operand.*/