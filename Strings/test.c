#include <stdio.h>
/*
Add `int max_of_four(int a, int b, int c, int d)` here.
*/
int max_of_four(int a, int b, int c, int d){
    if(a>b>c>d || a>b>d>c || a>c>b>d || a>c>d>b || a>d>b>c || a>d>c>b){
        return a;
    }
    else if(b>a>c>d || b>a>d>c || b>c>a>d || b>c>d>a || b>d>a>c || b>d>c>a){
        return b;
    }
    else if(c>b>a>d || c>b>d>a || c>a>b>d || c>a>d>b || c>d>b>a || c>d>a>b){
        return c;
    }
    else {
        return d;
    }
}

int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);
    
    return 0;
}
