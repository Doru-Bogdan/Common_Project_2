//
//  Teacher.hpp
//  lab-7
//
//  Created by Doru Mancila on 13/11/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//
#ifndef TeacherRole_hpp
#define TeacherRole_hpp

#include <iostream>
#include "Role.hpp"

class TeacherRole:public Role {
public:
    TeacherRole();
    TeacherRole(std::string studies, std::string didacticFunction);
    std::string getStudies();
    std::string getDidacticFunction();
    void setStudies(std::string studies);
    void setDidacticFunction(std::string didacticFunction);
private:
    std::string mStudies;
    std::string mDidacticFunction;
};

#endif
