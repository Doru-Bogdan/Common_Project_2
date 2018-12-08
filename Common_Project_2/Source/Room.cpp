//
//  Room.cpp
//  lab-7
//
//  Created by Doru Mancila on 27/11/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "Room.hpp"

Room::Room(std::string name) {
    mName = name;
}

void Room::setName(std::string name) {
    this->mName = name;
}

std::string Room::getName() {
    return mName;
}
