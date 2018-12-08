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

std::string Activity::getLocation() {
    return mLocation->getName();
}

std::string Activity::getOwner() {
    return mOwner->getLastName();
}

std::string Activity::getDescription() {
    return mDescription;
}

void Activity::setLocation(Room* room) {
    mLocation = room;
}

void Activity::setOwner(Person * owner) {
    mOwner = owner;
}

void Activity::setDescription(std::string description) {
    mDescription = description;
}


