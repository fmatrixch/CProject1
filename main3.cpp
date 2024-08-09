//
//  main3.cpp
//  c-1
//
//  Created by Francis Chiang on 8/3/24.
//
#include <stdio.h>

int calc()
{
    int a,b,c,d,e,f,g,h;
    printf("Input the value of a: \n");
    scanf("%d", &a);
    printf("Input the value of b: \n");
    scanf("%d", &b);
    c = a+b;
    d = a*b;
    if (a>b or a==b) {
        e = a-b;
        f = a/b;
        g = (c+d)*e*f;
        h = g/a;
    } else {
        e = b-a;
        f = b/a;
        g = (c+d)*e*f;
        h = g/a;
    }
    return h;
    
}

int main()
{
    int i=calc();
    if (i%2==0) {
        printf("%d\n",i);
        return 0;
    } else {
        return 1;
    }
}

