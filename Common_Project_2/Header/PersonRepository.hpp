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
    Person* searchByLastName(std::string);
    Person* searchByFirstName(std::string);
    Person* searchByFullName(std::string, std::string);
    Person* searchByCNP(int);
    Person* searchByEmail(std::string);
    std::vector<Person*> searchByRole(int);
};

#endif /* PersonRepository_hpp */
