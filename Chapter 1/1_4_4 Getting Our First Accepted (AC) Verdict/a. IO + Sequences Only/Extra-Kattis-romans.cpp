//
// Created by khalid on 09/04/24.
//

# include <bits/stdc++.h>
using namespace std;
int main(){
    float x; scanf("%f", &x);
    int res = round(1000.0 * (5280.0/4854.0) * x);
    printf("%d\n", res);
}

/*
 * The round() and ceil() functions are both used for rounding floating-point numbers to integers, but they differ in their behavior:

round() function:
The round() function rounds a floating-point number to the nearest integer.
If the fractional part of the number is less than 0.5, it rounds down to the nearest integer.
If it is greater than or equal to 0.5, it rounds up to the nearest integer.
For example, round(3.4) would result in 3, and round(3.6) would result in 4.
It returns a floating-point value.

ceil() function:
The ceil() function rounds a floating-point number up to the nearest integer, regardless of the fractional part.
It always rounds up to the next higher integer.
For example, ceil(3.4) would result in 4, and ceil(3.6) would also result in 4.
It returns a floating-point value.
In summary, round() provides symmetric rounding, while ceil() provides rounding up.
It's important to choose the appropriate function based on your specific rounding needs.
 */