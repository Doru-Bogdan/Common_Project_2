//
//  Teacher.cpp
//  lab-7
//
//  Created by Doru Mancila on 13/11/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "TeacherRole.hpp"

TeacherRole::TeacherRole()
    :Role(Role::TEACHER_ROLE)
{}

TeacherRole::TeacherRole(std::string studies, std::string didacticFunction)
    :Role(Role::TEACHER_ROLE) {
        this->mStudies = studies;
        this->mDidacticFunction = didacticFunction;
}

std::string TeacherRole::getStudies() {
    return this->mStudies;
}

std::string TeacherRole::getDidacticFunction() {
    return this->mDidacticFunction;
}

void TeacherRole::setStudies(std::string studies) {
    this->mStudies = studies;
}

void TeacherRole::setDidacticFunction(std::string didacticFunction) {
    this->mDidacticFunction = didacticFunction;
}
