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
    StudentRole(int IDNumber, int studyYear, int studyGroup, std::string financialForm);
    int getIDNumber();
    int getStudyYear();
    std::string getFinancialForm();
    int getStudyGroup();
    long getMarksSize();
    float getMarkByDiscipline(std::string name);
    void setIDNumber(int IDNumber);
    void setStudieYear(int studyYear);
    void setFinancialForm(std::string financialForm);
    void addMark(Mark* mark);
    void addMark(float mark, Discipline* discipline);
    void removeMark(std::string discipline);
    void updateMark(float mark, std::string discipline);
    void setStudyGroup(int studyGroup);
    Mark* getMark(int iterator);
    bool isMarkSet(Discipline* discipline);
private:
    int mIDNumber;
    int mStudyYear;
    std::string mFinancialForm;
    std::vector<Mark*> mMarks;
    int mStudyGroup;
};

#endif
