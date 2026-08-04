//==============================================================
//               STUDENT INFORMATION ANALYZER
//==============================================================
#include<iostream>
using namespace std;
void Student_Detail(string nm,int roll,int ag,int marks)
{
    cout<<"----------- Student Details -----------"<<endl;
    cout<<"Name  :  "<<nm<<endl;
    cout<<"Roll No  :  "<<roll<<endl;
    cout<<"Age  :  "<<ag<<endl;
    cout<<"Marks :  "<<marks<<endl;
    cout<<"---------------------------------------"<<endl;
}
void grade(int marks)
{
    if(marks>=90 and marks<=100)
    {
        cout<<"Grade - A";
    }
    else if(marks>=80 and marks<=89)
    {
        cout<<"Grade - B";
    }
    else if(marks>=70 and marks<=79)
    {
        cout<<"Grade - C";
    }
    else if(marks>=60 and marks<=69)
    {
        cout<<"Grade - D";
    }
    else if(marks<60)
    {
        cout<<"Grade - F";
    }
}
bool isAdult(int age)
{
    if(age<18)
    {
        return false;
    }
   if(age>=18)
   {
    return true;
   }
}
bool isPass(int marks)
{
    if(marks>=33)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void pattern(int marks)
{
    if (marks>=20)
    {
        int n =marks/4;
        for(int i=1;i<=n;i++)
        {
            for(int j=1;j<=i;j++)
            {
                cout<<" *";
            }
            cout<<endl;
        }
    }
    else
    {
        cout<<"No Pattern.";
    }
}
int main()
{
    char choice='Y';
    while(choice=='y' || choice=='Y')
    {
        string nm ;
        cout<<"Enter your name :";
        cin.ignore();
        getline(cin,nm);
        int roll;
        cout<<"Enter your roll No. :";
        cin>>roll;
        int ag;
        cout<<"Enter your age : ";
        cin>>ag;
        int marks;
        cout<<"Enter your marks :";
        cin>>marks;
        if(marks>100 || marks<0)
        {
            cout<<"Invalid Marks.";
           
        }
        else
        {
            cout<<endl;
            Student_Detail(nm,roll,ag,marks);
            cout<<endl;
            grade(marks);
            cout<<endl;
            cout<<"Is adult - "<<isAdult(ag);
            cout<<endl;
            cout<<"Is pass - "<<isPass(marks);
            cout<<endl;
            pattern(marks);
            cout<<"Do you want to continue? (Y/N): ";
            cin>>choice;
        }
    }
}
