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

class StudentRole:public Role {
public:
    StudentRole();
    StudentRole(int);
    int getNr() {
        return NrMatricol;
    }
private:
    int NrMatricol;
    int StudieYear;
    std::string FormaFinantare;
};

#endif
