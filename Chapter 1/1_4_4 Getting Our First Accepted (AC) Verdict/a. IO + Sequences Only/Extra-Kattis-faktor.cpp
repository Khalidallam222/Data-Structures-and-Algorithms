//
// Created by khalid on 09/04/24.
//

#include<stdio.h>
#include<math.h>
int main()
{
    int a, i; scanf("%d %d", &a, &i);
    int result = a * (i-1) + a * (0.001) + 1;
    printf("%d\n", result);
    return 0;
}