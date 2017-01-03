#include<iostream.h>
#include<string.h>
#include<conio.h>
//base class name
class StudentResult
{
 int mStud_Rollno;
public:
 //member function of base class
 void GetRollnumber()
 {
 cout << "Enter Roll No:";
 cin >> mStud_Rollno;
 }
 //member function of base class
 void PutRollnumber()
{
 cout << "\n\n\tRoll No:" << mStud_Rollno << "\n";
 }
};
//Deriving class Test from base class Student result
class Test : virtual public StudentResult
{
public:
 int mSubject1,mSubject2;
// member function of derived class
 void GetSubjectmarks()
 {
 cout << "Enter Marks\n";
 cout << "subject1:";
 cin >> mSubject1;
 cout << "subject2:";
 cin >> mSubject2;
 }
// member function of derived class
 void PutSubjectmarks()
 {
 cout << "\tMarks Obtained\n";
 cout << "\n\tsubject1:" << mSubject1;
 cout << "\n\tsubject2:" << mSubject2;
 }
};
//Derived class2 from base class
class Sports:public virtual StudentResult
{
public:
// member variable
 int mScore;
//member function
 void GetSportsscore()
 {
 cout << "Enter Sports Score:";
 cin >> mScore;
 }
//member function
 void PutSportsscore()
 {
 cout << "\n\tSports Score is:" << mScore;
 }
};
/*deriving a class from 2 derived classes*/
class Result : public Test, public Sports
{
 int mTotal;
public:
//derived class function
 void mDisplay()
 {
 mTotal = mSubject1 + mSubject2 + mScore;
 PutRollnumber();
 PutSubjectmarks();
PutSportsscore();
 cout << "\n\t Total Score:" << mTotal;
 }
};
void main()
{
// object created for only one class ( finally which was derived)
Result oStudentResult;
clrscr();
oStudentResult.GetRollnumber();
oStudentResult.GetSubjectmarks();
oStudentResult.GetSportsscore();
oStudentResult.mDisplay();
getch();
}
