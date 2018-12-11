//
//  PersonRepository.cpp
//  lab-7
//
//  Created by Doru Mancila on 04/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "PersonRepository.hpp"

Person* PersonRepository::searchByLastName(std::string lastName) {
    for (int i = 0; i < mEntities.size(); i++) {
        if (mEntities[i]->getLastName() == lastName)
            return mEntities[i];
    }
    throw std::runtime_error("Last name could not be found");
}

Person* PersonRepository::searchByFirstName(std::string firstName) {
    for (int i = 0; i < mEntities.size(); i++) {
        if (mEntities[i]->getFirstName() == firstName)
            return mEntities[i];
    }
    throw std::runtime_error("First name could not be found");
}

Person* PersonRepository::searchByFullName(std::string firstName, std::string lastName) {
    for (int i = 0; i < mEntities.size(); i++) {
        if (mEntities[i]->getFirstName() == firstName && mEntities[i]->getLastName() == lastName)
            return mEntities[i];
    }
    throw std::runtime_error("Person could not be found!");
}

Person* PersonRepository::searchByCNP(int CNP) {
    for (int i = 0; i < mEntities.size(); i++) {
        if (mEntities[i]->getCNP() == CNP)
            return mEntities[i];
    }
    throw std::runtime_error("Person with this CNP could not be found!");
}

Person* PersonRepository::searchByEmail(std::string email) {
    for (int i = 0; i < mEntities.size(); i++) {
        if (mEntities[i]->getEmail() == email)
            return mEntities[i];
    }
    throw std::runtime_error("Person with this email could not be found!");
}

std::vector<Person*> PersonRepository::searchByRole(int role) {
    std::vector<Person*> persons;
    for(int i = 0; i < mEntities.size(); i++) {
        try {
            if (mEntities[i]->getRole(role))
                persons.push_back(mEntities[i]);
        } catch (std::runtime_error) {}
    }
    if (persons.size() != 0)
        return persons;
    throw std::runtime_error("Persons with this role could not be found!");
}
