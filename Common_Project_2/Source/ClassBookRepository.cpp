//
//  ClassBookRepository.cpp
//  Common_Project_2
//
//  Created by Doru Mancila on 23/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "ClassBookRepository.hpp"

std::string ClassBookRepository::getSeriesNumber() {
    return this->mSeriesNumber;
}

std::string ClassBookRepository::getYear() {
    return this->mYear;
}

void ClassBookRepository::setSeriesNumber(std::string seriesNumber) {
    this->mSeriesNumber = seriesNumber;
}

void ClassBookRepository::setYear(std::string year) {
    this->mYear = year;
}

ClassBook* ClassBookRepository::searchByStudyGroup(int studyGroup) {
    for(int i = 0; i < mEntities.size(); i++) {
        if(mEntities[i]->getStudyGroup() == studyGroup)
            return mEntities[i];
    }
    throw std::runtime_error("Class book of this study group could not be found!");
}

Person* ClassBookRepository::searchByFullName(std::string lastName, std::string firstName) {
    Person* person = NULL;
    for (int i = 0; i < mEntities.size(); i++) {
        try {
            person = mEntities[i]->searchByFullName(lastName, firstName);
        } catch (std::runtime_error const e) {}
        if (person != NULL)
            return person;
    }
    throw std::runtime_error("Person could not be found!");
}

Person* ClassBookRepository::searchByCNP(int CNP) {
    Person* person = NULL;
    for (int i = 0; i < mEntities.size(); i++) {
        try {
            person = mEntities[i]->searchByCNP(CNP);
        } catch (std::runtime_error const e) {}
        if (person != NULL)
            return person;
    }
    throw std::runtime_error("Person could not be found!");
}

Person* ClassBookRepository::searchByEmail(std::string email) {
    Person* person = NULL;
    for (int i = 0; i < mEntities.size(); i++) {
        try {
            person = mEntities[i]->searchByEmail(email);
        } catch (std::runtime_error const e) {}
        if (person != NULL)
            return person;
    }
    throw std::runtime_error("Person could not be found!");
}
