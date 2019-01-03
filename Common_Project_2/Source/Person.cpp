//
//  Person.cpp
//  lab-7
//
//  Created by Doru Mancila on 13/11/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "Person.hpp"
#include "TeacherRole.hpp"
#include "StudentRole.hpp"
#include "GuestRole.hpp"
#include "AdministrativeRole.hpp"
#include <string>

Person::Person(std::string FirstName, std::string LastName, int CNP, std::string Email) {
    this->mCNP = CNP;
    this->mFirstName = FirstName;
    this->mLastName = LastName;
    this->mEmail = Email;
}

Person::Person(std::string FirstName, std::string LastName, int CNP, std::string Role, std::string Email) {
    this->mCNP = CNP;
    this->mFirstName = FirstName;
    this->mLastName = LastName;
    this->mEmail = Email;
    if (Role == "student") {
        this->mRoles.push_back(new StudentRole);
    } else if (Role == "teacher"){
        this->mRoles.push_back(new TeacherRole);
    } else if (Role == "guest") {
        this->mRoles.push_back(new GuestRole);
    } else if (Role == "administrative") {
        this->mRoles.push_back(new AdministrativeRole);
    } else {
        throw std::runtime_error("Role does not exist!");
    }
}

std::istream& operator >> (std::istream& stream, Person& object) {
    stream >> object.mCNP >> object.mEmail >> object.mFirstName >> object.mLastName;
    return stream;
}

std::ostream& operator << (std::ostream& stream, Person& object) {
    stream << object.mCNP << "\n" << object.mEmail << "\n" << object.mFirstName << "\n" << object.mLastName;
    return stream;
}

void Person::setFirstName(std::string FirstName) {
    this->mFirstName =FirstName;
}

void Person::setLastName(std::string LastName) {
    this->mLastName = LastName;
}

void Person::setEmail(std::string Email) {
    this->mEmail = Email;
}

void Person::setCNP(int CNP) {
    this->mCNP = CNP;
}

std::string Person::getFirstName() {
    return this->mFirstName;
}

std::string Person::getLastName() {
    return this->mLastName;
}

std::string Person::getEmail() {
    return this->mEmail;
}

int Person::getCNP() {
    return this->mCNP;
}

Person::Person() {
    
}

void Person::addRole(Role* role) {
    std::vector<Role*>::iterator it;
    for (it = mRoles.begin(); it != mRoles.end(); it++) {
        if ((*it)->getRole() == role->getRole()) {
            throw std::runtime_error("Role already exists!");
        }
    }
    mRoles.push_back(role);
}

Role* Person::displayRole(int role) {
    for (int i = 0; i < mRoles.size(); i++) {
        if (role == mRoles[i]->getRole())
            return mRoles[i];
    }
    throw std::runtime_error("Role could not be found");
}

Role::RoleType Person::getRole(int role) {
    for (int i = 0; i < mRoles.size(); i++) {
        if (role == mRoles[i]->getRole())
            return mRoles[i]->getRole();
    }
    throw std::runtime_error("Role could not be found");
}
