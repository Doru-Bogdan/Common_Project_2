//
//  Student.hpp
//  lab-7
//
//  Created by Doru Mancila on 13/11/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//
#ifndef StudentRole_hpp
#define StudentRole_hpp

#include <iostream>
#include "Role.hpp"
#include "Mark.hpp"

class StudentRole:public Role {
public:
    StudentRole();
    StudentRole(int, int, int, std::string);
    int getIDNumber();
    int getStudyYear();
    std::string getFinancialForm();
    int getStudyGroup();
    long getMarksSize();
    float getMarkByDiscipline(std::string);
    void setIDNumber(int);
    void setStudieYear(int);
    void setFinancialForm(std::string);
    void addMark(Mark*);
    void addMark(float, Discipline*);
    void removeMark(std::string);
    void updateMark(float, std::string);
    void setStudyGroup(int);
private:
    int mIDNumber;
    int mStudyYear;
    std::string mFinancialForm;
    std::vector<Mark*> mMarks;
    int mStudyGroup;
};

#endif
