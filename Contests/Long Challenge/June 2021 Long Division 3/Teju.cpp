#include<bits/stdc++.h>
using namespace std;


class CSE1002Result{

    public:
    void processResult(CourseDetails& c1, TheoryMarks& t1, LabMarks& l1, JComponentMarks& j1){
        cout<<c1.courseName<<endl;
    }

    void getCourseDetails(){

    }
    void setCourseDetails(){
        
    }
    void getTheoryMarks(){
        
    }

    void setTheoryMarks(){
        
    }

    void getLabMarks()
    {

    }

    void setLabMarks(){

    }

    void getJComponentMarks(){

    }

    void setJComponentMarks(){

    }



};

class CourseDetails{
    private: 
    string courseName="";
    int noOfHours = 0;
    string lecturerName="";
    int classRoom;

    public:

    friend class CSE1002Result;

    friend void CSE1002Result::getCourseDetails();
    friend void CSE1002Result::setCourseDetails();


};

class TheoryMarks{
    
    private:
     float cat1=0.0;
   float cat2=0.0;
    

    public:
friend class CSE1002Result;

friend void CSE1002Result::getTheoryMarks();
    friend void CSE1002Result::setTheoryMarks();
};

class LabMarks{
    private:
     float Ass1=0.0;
    float Ass2=0.0;
     float Ass3=0.0;

     public:
friend class CSE1002Result;

friend void CSE1002Result::getLabMarks();
    friend void CSE1002Result::setLabMarks();

    
};

class JComponentMarks{
    private:
     float jcompMarks=0.0;
    friend class CSE1002Result;

    friend void CSE1002Result::getJComponentMarks();
    friend void CSE1002Result::setJComponentMarks();
};



int main()
{
    CSE1002Result c1;
    CourseDetails c12;
    TheoryMarks t1;
    LabMarks l1;
    JComponentMarks j1;
    c1.processResult(c12,t1,l1,j1);
    return 0;
}


