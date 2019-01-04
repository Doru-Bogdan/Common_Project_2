//
//  PersonRepository.hpp
//  lab-7
//
//  Created by Doru Mancila on 04/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#ifndef PersonRepository_hpp
#define PersonRepository_hpp

#include "Repository.hpp"
#include "Person.hpp"

class PersonRepository: public Repository<Person> {
public:
    Person* searchByLastName(std::string lastName);
    Person* searchByFirstName(std::string firstName);
    Person* searchByFullName(std::string firstName, std::string lastName);
    Person* searchByCNP(int CNP);
    Person* searchByEmail(std::string email);
    std::vector<Person*> searchByRole(int role);
    long size();
};

#endif /* PersonRepository_hpp */
