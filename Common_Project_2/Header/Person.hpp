//
//  Person.hpp
//  lab-7
//
//  Created by Doru Mancila on 13/11/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#ifndef _PERSON_HPP
#define _PERSON_HPP

#include <iostream>
#include <string>
#include <vector>
#include "Role.hpp"
class Person {
public:
    Person();
    Person(std::string FirstName, std::string LastName, int CNP, std::string Email = "");
    friend std::istream& operator >> (std::istream&, Person&);
    friend std::ostream& operator << (std::ostream&, Person&);
    void setFirstName(std::string);
    void setLastName(std::string);
    void setCNP(int);
    void setEmail(std::string);
    std::string getFirstName();
    std::string getLastName();
    std::string getEmail();
    int getCNP();
    /*virtual std::string getOccupation(){
        return "No occupation!";
    }*/
    void addRole(Role*);
    Role* displayRole();
    Role::RoleType getRole();
    
protected:
    std::vector <Role*> mRoles;
    std::string mFirstName;
    std::string mLastName;
    int mCNP;
    std::string mEmail;
};

#endif