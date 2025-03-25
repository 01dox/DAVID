#include <iostream>
#include<iomanip>
using namespace std;


double CalculateSubjectAverage(double Assignment,double CourseWork,double MidTerm,double EndTerm)
{
    return (Assignment + CourseWork + MidTerm + EndTerm)/4.0;
}

int main()
{

    double Physics[4],Chemistry[4],Math[4];
    string Categories[] = {"Assignment", "CourseWork", "MidTerm", "EndTerm"};

    cout <<"Enter marks for Physics:" <<endl;
    for(int i = 0; i<4; i++){
        cout << Categories[i]<<": ";
        cin >>Physics[i];
    }
    cout <<"Enter marks for Chemistry:" <<endl;
    for(int i = 0; i<4; i++){
        cout << Categories[i]<<": ";
        cin >>Chemistry[i];
         }
         cout <<"Enter marks for Math:" <<endl;
    for(int i = 0; i<4; i++){
        cout << Categories[i]<<": ";
        cin >>Math[i];
    }

    double PhysicsAverage = CalculateSubjectAverage(Physics[0],Physics[1],Physics[2],Physics[3]);
    double ChemistryAverage = CalculateSubjectAverage(Chemistry[0],Chemistry[1],Chemistry[2],Chemistry[3]);
    double MathAverage = CalculateSubjectAverage(Math[0],Math[1],Math[2],Math[3]);
    double OverallAverage = (PhysicsAverage + ChemistryAverage + MathAverage)/3.0;



    cout <<"\nAverage marks: "<<endl;
    cout <<"Physics: "<<PhysicsAverage<<endl;
    cout <<"Chemistry: "<<ChemistryAverage<<endl;
    cout <<"Math: "<<MathAverage<<endl;
    cout <<"Overall Average: "<<OverallAverage<<endl;
       return 0;
}
