#include <stdio.h>

int main(){
    int a,result,l[8]={4,5,5,7,8,19,58,75};
    a=58;
    result=binsearch(a,l,8);

    printf("EL orden es: %d\n",result);
    return 0;


}
int binsearch(int x, int v[], int n)
{
    int low, high, mid;

    low=0;
    high=n-1;
    while(low<=high){
        mid=(low+high)/2;
        if (x<v[mid])
            high=mid-1;
        else if(x>v[mid])
            low=mid+1;
        else /*found match*/
            return mid;
    }
    return -1;/*no match*/
}
