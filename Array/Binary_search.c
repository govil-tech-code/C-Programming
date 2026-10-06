#include<stdio.h>
int main() {
    int i,j,a[100],mid,pos,n,found=0;
    printf("enter size");
    scanf("%d", &n);
    printf("enter sorted element");
    for(i=0; i<n; i++) {
        scanf("%d", &a[i]);
    }
    int target;
    printf("enter target");
    scanf("%d", &target);
   i=0;
   j=n-1;
   while(i<=j) {
    mid=i+(j-i)/2;
    if(a[i] < target) {
      i=mid+1;
    } else if(a[i]>target) {
        j=mid-1;
    } else {
        pos=mid;
        break;
    }
   }
   if(pos==-1) {
    printf("not found");
   } else {
    printf("found at %d", pos);
   }
   return 0;
}