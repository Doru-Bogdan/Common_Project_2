//
//  Course.cpp
//  Common_Project_2
//
//  Created by Doru Mancila on 18/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "Course.hpp"

Course::Course(Room* location, Person* owner, std::string description)
    :Activity(location, owner, description)
{}

Course::Course(Room* location, Person* owner, std::string description, std::vector<Person*> Student)
:Activity(location, owner, description)
{
    this->mStudent = Student;
}
