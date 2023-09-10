#include "bits/stdc++.h"
using namespace std;

int main()
{
    std::cout<<"-------Hello , today we are going to assess students based on their grades---------";
    std::cout<<"\n";
    std::cout<<"-------The maximum marks of a particular exam is 100. If a student gets within 90 and 100, he/she gets S grade. If a student gets within 80 and 100, he/she gets A grade. If a student gets within 70 and 80, he/she gets B grade. Any marks below 70 will be given C grade------------ ";
    std::cout<<"\n";
    vector<int> grades;
    vector<string>name;
    std::cout<<"\n";
    int student;
    std::cout<<"Enter the number of students for whom you want to analyze the grades : ";
    std::cin>>student;
    std::cout<<"\n";
    for(int i=0;i<student;i++)
    {
        int g;
        string n;
        std::cout<<"Enter the student grade : ";
        std::cin>>g;
        if(g>100)
        {
            std::cout<<"We cannot process as it is an invalid input";
            break;
        }
        else
        {
            grades.push_back(g);
        }
        std::cout<<"Enter the student name : ";
        std::cin>>n;
        name.push_back(n);
    }
    std::cout<<"\n";
    std::cout<<"------Now that we have successfully got all the grades and names of students, we analyze the average, highest and lowest grade--------";
    std::cout<<"\n";
    int sum=0;
    for(int i=0;i<grades.size();i++)
    {
        sum=sum+grades[i];
    }
    int avg= sum/grades.size();
    int Max= *max_element(grades.begin(),grades.end());
    int Min= *min_element(grades.begin(),grades.end());
    std::cout<<"The average grade of students is : ";
    std::cout<< avg;
    std::cout<<"\n";
    for(int j=0;j<grades.size();j++)
    {
        if(grades[j]==Max)
        {
            if(Max>90 && Max<=100)
            {
            std::cout<<name[j]<<" has got the highest marks : "<<grades[j]<<" and he gets the grade S";
            std::cout<<"\n";
            }
            if(Max>80 && Max<=90)
            {
            std::cout<<name[j]<<" has got the highest marks : "<<grades[j]<<" and he gets the grade A ";
            std::cout<<"\n";
            }
            if(Max>70 && Max<=80)
            {
            std::cout<<name[j]<<" has got the highest marks : "<<grades[j]<<" and he gets the grade B ";
            std::cout<<"\n";
            }
            if(Max<=70)
            {
            std::cout<<name[j]<<" has got the highest marks : "<<grades[j]<<" and he gets the grade C ";
            std::cout<<"\n";
            }
        }
    }
    std::cout<<"\n";
    for(int z=0;z<grades.size();z++)
    {
        if(grades[z]==Min)
        {
            if(Min>90 && Min<=100)
            {
            std::cout<<name[z]<<" has got the lowest marks : "<<grades[z]<<" and he gets the grade S";
            std::cout<<"\n";
            }
            if(Min>80 && Min<=90)
            {
            std::cout<<name[z]<<" has got the lowest marks : "<<grades[z]<<" and he gets the grade A ";
            std::cout<<"\n";
            }
            if(Min>70 && Min<=80)
            {
            std::cout<<name[z]<<" has got the lowest marks : "<<grades[z]<<" and he gets the grade B ";
            std::cout<<"\n";
            }
            if(Min<=70)
            {
            std::cout<<name[z]<<" has got the lowest marks : "<<grades[z]<<" and he gets the grade C ";
            std::cout<<"\n";
            }
        }
    }
}
