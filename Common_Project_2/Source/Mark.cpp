//
//  Mark.cpp
//  Common_Project_2
//
//  Created by Doru Mancila on 18/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "Mark.hpp"

Mark::Mark(float mark, Discipline* discipline) {
    this->mMark = mark;
    this->mDiscipline = discipline;
}

std::string Mark::getDiscipline() {
    return this->mDiscipline->getName();
}

float Mark::getMark() {
    return this->mMark;
}

void Mark::setDiscipline(Discipline * discipline) {
    this->mDiscipline = discipline;
}

void Mark::setMark(float mark) {
    this->mMark = mark;
}
