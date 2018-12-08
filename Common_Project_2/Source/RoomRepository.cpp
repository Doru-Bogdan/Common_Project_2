//
//  RoomRepository.cpp
//  lab-7
//
//  Created by Doru Mancila on 04/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "RoomRepository.hpp"

Room* RoomRepository::findByName(std::string name) {
    for (int i = 0; i < mEntities.size(); i++) {
        if (mEntities[i]->getName() == name)
            return mEntities[i];
    }
    throw std::runtime_error("There isn't any room with this name!");
}
