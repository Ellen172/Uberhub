#include<bits/stdc++.h>

int main() {
    int x;

    scanf("%d", &x);

    if(x%2==0) x++;

    for(int i=x; i<x+12; i+=2){
        printf("%d\n", i);
    }

    return 0;
}
