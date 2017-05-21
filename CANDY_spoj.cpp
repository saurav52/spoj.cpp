#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    int a[10001];
    long long  sum;
    cin>>n;
    while(n!=-1)
    {
        sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
            sum=sum+a[i];
        }
        int avg=sum/n;
        int count=0,count1=0;
        sort(a,a+n);
        for(int i=n-1;i>=0;i--)
        {
            if(a[i]>avg)
            {
                count=count+(a[i]-avg);
                count1=count;
            }
            if(a[i]<avg)
            {
                count=count-(avg-a[i]);
            }
        }
        if(count==0)
            cout<<count1<<endl;
        else
            cout<<"-1"<<endl;
        cin>>n;

    }
    }
