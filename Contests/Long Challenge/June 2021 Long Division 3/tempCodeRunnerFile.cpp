
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
    
    public:
    friend class CSE1002Result;

    friend void CSE1002Result::getJComponentMarks();
    friend void CSE1002Result::setJComponentMarks();
};
