#include<bits/stdc++.h>

int main() {
    int vet[10];
    for (int i=0; i<10; i++){
        scanf("%d", &vet[i]);
        if(vet[i]<=0){
            vet[i]=1;
        }
    }
    for (int i=0; i<10; i++){
        printf("X[%d] = %d\n", i, vet[i]);
    }

    return 0;
}
