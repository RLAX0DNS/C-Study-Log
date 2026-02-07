#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    int t = scanf("%d");

    while (t--){
        int x1, y1, r1, x2, y2, r2;
        scanf ("%d" "%d" "%d" "%d" "%d" "%d", &x1, &y1, &r1, &x2, &y2, &r2);
    
        int xLen = abs (x1-x2);
        int yLen = abs (y1-y2);

        double distance = sqrt (xLen * xLen + yLen * yLen); //sqrt --> 루트 연산

        if (distance == r1+r2) printf ("1");
        if (distance == abs(r1-r2)) printf ("1");
        if (distance ==0) printf ("-1");
        if (distance <r1+r2) printf ("2");
        if (distance > r1+r2) printf ("0");
    }

    
    return 0;
}