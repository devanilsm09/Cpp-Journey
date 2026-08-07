
// =================================================================
//                 PROBLEM 05 - MATRIX ANALYZER
// =================================================================
#include<iostream>
#include<climits>
using namespace std;
void input(int arr[][100],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
            cout<<" ";
        }
        cout<<endl;
    }
}
void output(int arr[][100],int r,int c)
{
    cout<<"=============================="<<endl;
    cout<<"Matrix"<<endl;
    cout<<"=============================="<<endl;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int maximum(int arr[][100], int r,int c)
{
    int mx=INT_MIN;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]>mx)
            {
                mx=arr[i][j];
            }
        }
    }
    return mx;
}
int minimum(int arr[][100], int r,int c)
{
    int min=INT_MAX;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]<min)
            {
                min=arr[i][j];
            }
        }
    }
    return min;
}
int sum(int arr[][100], int r,int c)
{
    int sum=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum+=arr[i][j];
        }
    }
    return sum;
}
float average(int arr[][100], int r,int c)
{
    float sum=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            sum+=arr[i][j];
        }
    }
    float avg =sum/(r*c);
    return avg;
}
int Ecount(int arr[][100], int r,int c)
{
    int count=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]%2==0)
            {
                count +=1;
            }
        }
    }
    return count;
}
int Ocount(int arr[][100], int r,int c)
{
    int count=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(arr[i][j]%2!=0)
            {
                count +=1;
            }
        }
    }
    return count;
}
void R_sum(int arr[][100],int r,int c)
{
    for(int i=0;i<r;i++)
    {
        int sum=0;
            for(int k=0;k<c;k++)
            {
                sum+=arr[i][k];
            }
        cout<<"Sum of "<<i<<" row :"<<sum<<endl;
    }
}
void C_sum(int arr[][100],int r,int c)
{
    for(int j=0;j<c;j++)
    {
        int sum=0;
            for(int k=0;k<r;k++)
            {
                sum+=arr[k][j];
            }
        cout<<"Sum of "<<j<<" column :"<<sum<<endl;
    }
}
void search(int arr[][100],int r,int c)
{
    int n;
    cout<<"Enter a number for search :";
    cin>>n;
    cout<<endl;
    bool isFound =false;
    for(int i= 0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(n==arr[i][j])
           {
             isFound = true;
            cout<<"Found at Row : "<<i<<endl;
            cout<<"Found at Column : "<<j<<endl;
            return;
           }
        }
    }
    if(isFound==false)
    {
        cout<<"Number is not found !";
    }
}
int main()
{
    int r,c;
    cout<<"Enter the number of rows : ";
    cin>>r;
    cout<<"Enter the number of columns :";
    cin>>c;
    int arr[100][100];
    cout<<endl;
    input(arr,r,c);
    cout<<endl;
    output(arr,r,c);
    cout<<endl;
    cout<<"Macimum : "<<maximum(arr,r,c)<<endl;
    cout<<"Minimum : "<<minimum(arr,r,c)<<endl;
    cout<<"Sum : "<<sum(arr,r,c)<<endl;
    cout<<"Average : "<<average(arr,r,c)<<endl;
    cout<<"Even Elements : "<<Ecount(arr,r,c)<<endl;
    cout<<"Odd Elements : "<<Ocount(arr,r,c)<<endl;
    R_sum(arr,r,c);
    cout<<endl;
    C_sum(arr,r,c);
    cout<<endl;
    search(arr,r,c);
    cout<<endl;
}
