#include<bits/stdc++.h>

int main() {
    double a;
    int cont=0;

    for(int i=0; i<6; i++){
        scanf("%lf", &a);
        if(a>0){
            cont++;
        }
    }

    printf("%d valores positivos\n", cont);
}
