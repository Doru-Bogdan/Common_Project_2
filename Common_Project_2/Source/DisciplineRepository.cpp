//
//  DisciplineRepository.cpp
//  Common_Project_2
//
//  Created by Doru Mancila on 29/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "DisciplineRepository.hpp"

Discipline* DisciplineRepository::searchByName(std::string name) {
    typename std::vector<Discipline*>::iterator it;
    for (it = mEntities.begin(); it != mEntities.end(); it++) {
        if ((*it)->getName() == name)
            return *it;
    }
    throw std::runtime_error("Discipline could not be found!");
}
