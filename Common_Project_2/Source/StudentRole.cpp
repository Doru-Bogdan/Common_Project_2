//
//  Student.cpp
//  lab-7
//
//  Created by Doru Mancila on 13/11/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "StudentRole.hpp"

StudentRole::StudentRole()
    :Role(Role::STUDENT_ROLE)
{}

StudentRole::StudentRole(int IDNumber, int studyYear, int studyGroup, std::string financialForm)
    :Role(Role::STUDENT_ROLE) {
        this->mIDNumber = IDNumber;
        this->mStudyYear = studyYear;
        this->mStudyGroup = studyGroup;
        this->mFinancialForm = financialForm;
}

int StudentRole::getIDNumber() {
    return this->mIDNumber;
}

int StudentRole::getStudyYear() {
    return this->mStudyYear;
}

std::string StudentRole::getFinancialForm() {
    return this->mFinancialForm;
}

int StudentRole::getStudyGroup() {
    return this->mStudyGroup;
}

void StudentRole::setIDNumber(int IDNumber) {
    this->mIDNumber = IDNumber;
}

void StudentRole::setStudieYear(int studyYear) {
    this->mStudyYear = studyYear;
}

void StudentRole::setFinancialForm(std::string financialForm) {
    this->mFinancialForm = financialForm;
}

void StudentRole::addMark(Mark* mark) {
    mMarks.push_back(mark);
}

void StudentRole::addMark(float mark, Discipline* discipline) {
    this->mMarks.push_back(new Mark(mark, discipline));
}

void StudentRole::removeMark(std::string discipline) {
    std::vector<Mark*>::iterator it;
    for (it = mMarks.begin(); it != mMarks.end(); it++) {
        if ((*it)->getDiscipline() == discipline) {
            mMarks.erase(it);
            break;
        }
    }
}

void StudentRole::updateMark(float mark, std::string discipline) {
    std::vector<Mark*>::iterator it;
    for (it = mMarks.begin(); it != mMarks.end(); it++) {
        if ((*it)->getDiscipline() == discipline) {
            (*it)->setMark(mark);
            break;
        }
    }
}

void StudentRole::setStudyGroup(int studyGroup) {
    this->mStudyGroup = studyGroup;
}
