#include<stdio.h>
int main() {
    int i,n,a[100],temp;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    i=0;
    int j=n-1;
    while(i<=j) {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        i++;
        j--;
    }
    for(i=0; i<n; i++) {
        printf("%d", a[i]);
    }
}