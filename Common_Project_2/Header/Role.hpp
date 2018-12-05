//
//  Role.hpp
//  lab-7
//
//  Created by Doru Mancila on 27/11/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#ifndef Role_hpp
#define Role_hpp

#include <iostream>

class Role {
public:
    enum RoleType {
        STUDENT_ROLE,
        TEACHER_ROLE
    };
    Role(RoleType type);
    virtual ~Role() {}
    RoleType getRole();
private:
    RoleType mType;
};

#endif /* Role_hpp */
