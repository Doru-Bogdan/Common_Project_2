//
//  Discipline.cpp
//  Common_Project_2
//
//  Created by Doru Mancila on 18/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "Discipline.hpp"

Discipline::Discipline(std::string name, Activity* activity) {
    this->mName = name;
    this->mActivities.push_back(activity);
}

std::string Discipline::getName() {
    return mName;
}

Activity* Discipline::getActivity(std::string name) {
    for (int i = 0; i < mActivities.size(); i++) {
        if (mActivities[i]->getDescription() == name)
            return mActivities[i];
    }
    throw std::runtime_error("Activity does not exist!");
}

std::vector<Activity*> Discipline::getActivities() {
    return mActivities;
}
