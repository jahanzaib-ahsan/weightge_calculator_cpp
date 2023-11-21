#include<iostream>
using namespace std;
int main ()
{
    int score=0;
    float weightage=0.00,result=0.00,sum_of_weights=0.0;

    cout<<"Enter number of testscore 1"<<endl;
    cin>> score ;
    cout<<"Enter weightage of testscore 1"<<endl;
    cin>> weightage ;
    sum_of_weights+=weightage;
    result=score*weightage;

    cout<<"Enter number of testscore 2"<<endl;
    cin>> score ;
    cout<<"Enter weightage of testscore 2"<<endl;
    cin>> weightage ;
    sum_of_weights+=weightage;
    result= result+(score*weightage);
    
    cout<<"Enter number of testscore 3"<<endl;
    cin>> score ;
    cout<<"Enter weightage of testscore 3"<<endl;
    cin>> weightage ;
    sum_of_weights+=weightage;
    result+=score*weightage;
    
    cout<<"Enter number of testscore 4"<<endl;
    cin>> score ;
    cout<<"Enter weightage of testscore 4"<<endl;
    cin>> weightage ;
    sum_of_weights+=weightage;
    result+=score*weightage;
    
    cout<<"Enter number of testscore 4"<<endl;
    cin>> score ;
    cout<<"Enter weightage of testscore 4"<<endl;
    cin>> weightage ;
    sum_of_weights+=weightage;
    result+=score*weightage;
    
    cout<<"Sum of weights = "<<sum_of_weights<<endl;
    cout<<"Sum of all N*W = "<<result<<endl;
    cout<<"Weighted average  = "<<result/sum_of_weights<<endl;

    return 0;
}