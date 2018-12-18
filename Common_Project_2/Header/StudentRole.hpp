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
    StudentRole(int, int, std::string);
    int getIDNumber();
    int getStudyYear();
    std::string getFinancialForm();
    int getStudyGroup();
    void setIDNumber(int);
    void setStudieYear(int);
    void setFinancialForm(std::string);
    void addMark(Mark*);
    void setStudyGroup(int);
private:
    int mIDNumber;
    int mStudyYear;
    std::string mFinancialForm;
    std::vector<Mark*> mMarks;
    int mStudyGroup;
};

#endif
