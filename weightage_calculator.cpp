#include<iostream>
using namespace std;
int main ()
{
    int s1,s2,s3,s4;
    float w1,w2,w3,w4;

    cout<<"Enter number of testscore 1"<<endl;
    cin>> s1 ;
    cout<<"Enter weightage of testscore 1"<<endl;
    cin>> w1 ;
    cout<<"Enter number of testscore 2"<<endl;
    cin>> s2 ;
    cout<<"Enter weightage of testscore 2"<<endl;
    cin>> w2 ;
    cout<<"Enter number of testscore 3"<<endl;
    cin>> s3 ;
    cout<<"Enter weightage of testscore 3"<<endl;
    cin>> w3 ;
    cout<<"Enter number of testscore 4"<<endl;
    cin>> s4 ;
    cout<<"Enter weightage of testscore 4"<<endl;
    cin>> w4 ;
    
    float sum=w1+w2+w3+w4;
    cout<<"sum of weights = "<<sum<<endl;
    float sum2;
    sum2=(s1*w1)+(s2*w2)+(s3*w3)+(s4*w4);
    cout<<"sum of all N*W = "<<sum2<<endl;
    float weighted_average;
    weighted_average=sum2/sum;
    cout<<"weighted average is : "<<weighted_average<<endl;



    return 0;
}