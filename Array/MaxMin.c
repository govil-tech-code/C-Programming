#include<stdio.h>
int main() {
    int n,i,max,min,a[100];
    printf("enter size");
    scanf("%d", &n);
    printf("enter elemnets");
   for(i=0; i<n; i++) {
     scanf("%d", &a[i]);
   }

   max=a[0];
   min=a[0];
   for(i=1; i<n; i++) {
    if(a[i]<min) {
        min=a[i];
    }
    if(a[i]>max) {
        max=a[i];
    }
   }

   printf("Maximum=%d\n", max);
    printf("Miniimum=%d\n", min);
    return 0;
}