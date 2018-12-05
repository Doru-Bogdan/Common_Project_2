//
//  Student.cpp
//  lab-7
//
//  Created by Doru Mancila on 13/11/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "StudentRole.hpp"

StudentRole::StudentRole()
    :Role(Role::STUDENT_ROLE)
{}

StudentRole::StudentRole(int nrMatricol)
    :Role(Role::STUDENT_ROLE) {
        NrMatricol = nrMatricol;
}
