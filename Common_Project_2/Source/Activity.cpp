//
//  Activity.cpp
//  lab-7
//
//  Created by Doru Mancila on 27/11/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "Activity.hpp"

Activity::Activity(Room* location, Person* owner, std::string description) {
    mLocation = location;
    mOwner = owner;
    mDescription = description;
}


