// Remove duplicate from sorted array.........

#include<stdio.h>
int main() {
    int i,a[100],n;
    printf("enter size");
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    int k=0;
    for(i=1; i<n; i++) {
        if(a[i] != a[k]) {
            k++;
            a[k]=a[i];
        }
    }
    printf("removed array");
    for(i=0; i<=k; i++) {
        printf("%d", a[i]);
    }
    printf("\n");
    return 0;
}