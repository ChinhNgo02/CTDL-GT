#include<bits/stdc++.h>
using namespace std;

int maxIndexDiff(int arr[], int n)
{
    int leftMin[n] ;
    leftMin[0] = arr[0];
    for(int i = 1 ; i<n; i++)
        leftMin[i] = min(leftMin[i-1], arr[i]);
    int maxDist = 0;
    int i = n-1, j = n-1;
 
    while(i>=0  &&  j>=0)
    {
        if(arr[j] >= leftMin[i])
        {
            maxDist = max(maxDist, j-i);
            i--;
        }
        else
            j--;
    }
 
    return maxDist;
         
}
 
int main()
{
    
    int t;
    cin>>t;
    while (t--)
    {
        int n,k;
        int a[100005],b[100005];
        cin>>n;
        for(int i=0;i<n;i++)
            cin>>a[i];
        
        int maxDiff = maxIndexDiff(a, n);
    	cout << maxDiff<<endl;
       
    }
   
}