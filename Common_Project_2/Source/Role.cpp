//
//  Role.cpp
//  lab-7
//
//  Created by Doru Mancila on 27/11/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "Role.hpp"

Role::Role(RoleType type) {
    mType = type;
}

Role::RoleType Role::getRole() {
    return mType;
}
