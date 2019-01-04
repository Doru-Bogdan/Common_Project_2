//
//  GuestRole.hpp
//  lab-7
//
//  Created by Doru Mancila on 27/11/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#ifndef GuestRole_hpp
#define GuestRole_hpp

#include <iostream>
#include "Role.hpp"
#include "Activity.hpp"
#include <vector>

class GuestRole:public Role {
public:
    GuestRole();
    GuestRole(std::vector<Activity*> activities);
    GuestRole(Activity* activity);
private:
    std::vector<Activity*> mActivities;
};

#endif /* GuestRole_hpp */
