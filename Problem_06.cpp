
// =================================================================
//               PROBLEM 06 - ARRAY FREQUENCY ANALYZER
// =================================================================

#include<iostream>
#include<climits>
using namespace std;
void input(int arr[],int n)
{
    cout<<"Enter elements :";
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        cout<<" ";
    }
}
void output(int arr[],int n)
{
    cout<<"Array : ";
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
        cout<<" ";
    }
}
void frequency(int arr[],int n)
{
    int x;
    cout<<"Enter a number : ";
    cin>>x;
    int count=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            count +=1;
        }
    }
    cout<<endl;
    cout<<"Frequency of "<<x<<" is : "<<count;
}
void CHfrequency(int arr[],int n)
{
    int maxcount=0;
    int maxelement;
    for(int i =0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[j]==arr[i])
            {
                count+=1;
            }
        }
         if(count>maxcount)
        {
            maxcount=count;
            maxelement =arr[i];
        }
    }
    cout<<"Most frequent element : "<<maxelement<<endl;
    cout<<"Frequency : "<<maxcount<<endl;
}
void  CMfrequency(int arr[],int n)
{
    int mincount=INT_MAX;
    int minelement;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count+=1;
            }
        }
        if(mincount>count)
        {
            mincount=count;
            minelement=arr[i];
        }
    }
    cout<<"Element with Lowest Frequency : "<<minelement<<endl;
    cout<<"Frequency : "<<mincount<<endl;
}
void duplicateE(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cout<<arr[i]<<" ";
            }
        }
    }
}
void uniqueE(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count+=1;
            }
        }
        if(count>0 && count<=1)
        {
            cout<<arr[i]<<" ";
        }
    }
    
}
int CduplicateE(int arr[],int n)
{
    int count=0;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count +=1;
            }
        }
    }
    return count;
}
int CuniqueE(int arr[],int n)
{
    int ucou=0;
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count+=1;
            }
        }
        if(count>0 && count<=1)
        {
            ucou+=1;
        }
    }
    return ucou;
}
int main()
{
    int n;
    cout<<"Enter the length of array :";
    cin>>n;
    int arr[n];
    cout<<endl;
    input(arr,n);
    cout<<endl;
    output(arr,n);
    cout<<endl;
    frequency(arr,n);
    cout<<endl;
    CHfrequency(arr,n);
    cout<<endl;
    CMfrequency(arr,n);
    cout<<endl;
    cout<<"Duplicate Elements :";
    duplicateE(arr,n);
    cout<<endl;
    cout<<"Unique Elements :";
    uniqueE(arr,n);
    cout<<endl;
    cout<<"Number of Duplicate Elements :"<<CduplicateE(arr,n);
    cout<<endl;
    cout<<"Number of Unique Elements :"<<CuniqueE(arr,n);
    cout<<endl;
}
