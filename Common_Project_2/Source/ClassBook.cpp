//
//  ClassBook.cpp
//  Common_Project_2
//
//  Created by Doru Mancila on 19/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "ClassBook.hpp"
#include "StudentRole.hpp"
#include <iterator>

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
std::vector<Person*>::iterator it;

void ClassBook::removeByCNP(int CNP) {
    int valide = 0;
    for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
        if ((*it)->getCNP() == CNP) {
            mClassBook.erase(it);
            valide = 1;
            break;
        }
    }
    if (valide == 0) {
        throw std::runtime_error("Person could not be found!");
    }
}

void ClassBook::removeByEmail(std::string email) {
    int valide = 0;
    for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
        if ((*it)->getEmail() == email) {
            mClassBook.erase(it);
            valide = 1;
            break;
        }
    }
    if (valide == 0) {
        throw std::runtime_error("Person could not be found!");
    }
}

Person* ClassBook::searchByLastName(std::string lastName) {
    for (it = mClassBook.begin(); it != mClassBook.end() ; it++) {
        if ((*it)->getLastName() == lastName)
            return *it;
    }
    throw std::runtime_error("Person could not be found!");
}

Person* ClassBook::searchByFirstName(std::string firstName) {
    for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
        if ((*it)->getFirstName() == firstName)
            return *it;
        
    }
    throw std::runtime_error("Person could not be found!");
}

Person* ClassBook::searchByFullName(std::string lastName, std::string firstName) {
    for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
        if ((*it)->getLastName() == lastName && (*it)->getFirstName() == firstName)
            return *it;
    }
    throw std::runtime_error("Person could not be found!");
}

Person* ClassBook::searchByCNP(int CNP) {
    for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
        if((*it)->getCNP() == CNP)
            return *it;
    }
    throw std::runtime_error("Person could not be found!");
}

Person* ClassBook::searchByEmail(std::string email) {
    for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
        if((*it)->getEmail() == email)
            return *it;
    }
    throw std::runtime_error("Person could not be found!");
}

std::vector<Person*> ClassBook::getClassBook() {
    std::vector<Person*> students;
    for (it = mClassBook.begin(); it != mClassBook.end(); it++) {
        students.push_back(*it);
    }
    return students;
}

void ClassBook::addMark(float mark, Discipline* discipline, std::string lastName, std::string firstName) {
    StudentRole *student = NULL;
    for(it = mClassBook.begin(); it != mClassBook.end(); it++) {
        if ((*it)->getLastName() == lastName && (*it)->getFirstName() == firstName) {
            student = dynamic_cast<StudentRole*>((*it)->displayRole(1));
            break;
        }
    }
    student->addMark(mark, discipline);
}

void ClassBook::removeMark(std::string discipline, std::string lastName, std::string firstName) {
    StudentRole *student = NULL;
    for(it = mClassBook.begin(); it != mClassBook.end(); it++) {
        if ((*it)->getLastName() == lastName && (*it)->getFirstName() == firstName) {
            student = dynamic_cast<StudentRole*>((*it)->displayRole(1));
            break;
        }
    }
    student->removeMark(discipline);
}

void ClassBook::updateMark(float mark, std::string discipline, std::string lastName, std::string firstName) {
    StudentRole *student = NULL;
    for(it = mClassBook.begin(); it != mClassBook.end(); it++) {
        if ((*it)->getLastName() == lastName && (*it)->getFirstName() == firstName) {
            student = dynamic_cast<StudentRole*>((*it)->displayRole(1));
            break;
        }
    }
    student->updateMark(mark, discipline);
}

long ClassBook::getSize() {
    return mClassBook.size();
}

int ClassBook::getStudyGroup() {
    return this->mStudyGroup;
}
