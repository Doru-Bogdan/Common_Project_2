//
//  ClassBook.cpp
//  Common_Project_2
//
//  Created by Doru Mancila on 19/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "ClassBook.hpp"
#include "StudentRole.hpp"

ClassBook::ClassBook(int studyGroup) {
    this->mStudyGroup = studyGroup;
}

void ClassBook::add(Person * person) {
    StudentRole* p = dynamic_cast<StudentRole*>(person->displayRole(1));
    for (int i = 0; i < mClassBook.size(); i++) {
        if (mClassBook[i]->getCNP() == person->getCNP()) {
            throw std::runtime_error("Person already exists!");
        }
    }
    if (p->getStudyGroup() != mStudyGroup) {
        throw std::runtime_error("Person not from this group!");
    }
    try {
        person->getRole(1);
    } catch (std::runtime_error const e) {
        throw std::runtime_error("Not a student");
    }
        mClassBook.push_back(person);
}
