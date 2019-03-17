///https://www.geeksforgeeks.org/maximum-product-subset-array/
///Given an array a, we have to find maximum product possible with the subset of elements present in the array.
///The maximum product can be single element also.

#include<stdio.h>
int findindex(int A[],int n)
{
    int i,max=-100000000,pos;
    for(i=0;i<n;i++)
    {
        if(A[i]<0&&max<A[i])
        {
            max=A[i];
            pos=i;
        }

    }
    return pos;
}
int main()
{
    int i,val,k=0,n;
    int A[1000],pos[1000],neg[1000],p=0,ne=0,pospro=1,negpro=1;
    printf("Enter the number of the array :-");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        if(A[i]<0)
            ne++;
        if(A[i]>=0)
        {
            pospro=pospro*A[i];
        }
    }
    if(ne%2==0)
    {
        for(i=0;i<n;i++)
        {
            if(A[i]<0)
            {
                negpro=negpro*A[i];
            }
        }
    }
    else
    {
        k=findindex(A,n);
        for(i=0;i<n;i++)
        {
            if(A[i]<0&&i!=k)
            {
                negpro=negpro*A[i];
            }
        }
    }
    printf("Maximum Sum of Product %d",negpro*pospro);





}
