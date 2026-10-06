#include<stdio.h>
int main() {
    int i,n,a[100],found=0;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    int target;
     scanf("%d", &target);
     for(i=0; i<n; i++) {
        if(a[i]==target) {
           found=1;
           break;
        }
     }
     if(found) {
         printf("target is found at index %d", i);
     } else {
        printf("not found");
     }
     return 0;
}