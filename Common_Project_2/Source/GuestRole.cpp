//
//  GuestRole.cpp
//  lab-7
//
//  Created by Doru Mancila on 27/11/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "GuestRole.hpp"

GuestRole::GuestRole()
    :Role(Role::GUEST_ROLE)
{}

GuestRole::GuestRole(std::vector<Activity*> activities)
:Role(Role::GUEST_ROLE)
{
    this->mActivities = activities;
}

GuestRole::GuestRole(Activity* activity)
:Role(Role::GUEST_ROLE)
{
    this->mActivities.push_back(activity);
}
