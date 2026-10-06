#include<stdio.h>
#include<limits.h>
int main() {
    int n,i,a[100];

    int first = INT_MIN;
    int second = INT_MIN;
     printf("enter size");
    scanf("%d", &n);
    printf("enter elemnets");
   for(i=0; i<n; i++) {
     scanf("%d", &a[i]);
   }

   for(i=0; i<n; i++) {
    if(a[i]>first) {
        second=first;
        first=a[i];
    } else if(a[i]>second && a[i]!=first) {
        second=a[i];
    }
   }

   if(second==INT_MIN) {
      printf("2nd largest does not exist");
   } else {
    printf("second largest element = %d", second);
   }
}