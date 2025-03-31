#include <stdio.h>
int main()
{
        printf("enter no. of elements\n");
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        printf("enter no. to be searched\n");
        int s;
        scanf("%d",&s);
        int start=0;
        int end=n-1;
        int mid;
        int index=-1;
        while(start<=end)
        {
            mid=(start+end)/2;
            if(arr[mid]==s) {
                index = mid;
                break;
            }
            else if(s>=arr[mid])
                start=mid+1;
            else
                end=mid-1;
        }
        if(index==-1)
            printf("not found");
        else
        printf("found at index %d",index);

    }
