//
//  ClassBookRepository.hpp
//  Common_Project_2
//
//  Created by Doru Mancila on 23/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#ifndef ClassBookRepository_hpp
#define ClassBookRepository_hpp

#include "Repository.hpp"
#include "ClassBook.hpp"

class ClassBookRepository: public Repository<ClassBook> {
public:
    ClassBook* searchByStudyGroupAndYear(int studyGroup, std::string year);
    Person* searchByFullNameAndYear(std::string firstName, std::string lastName, std::string year);
    Person* searchByCNPAndYear(int, std::string);
    Person* searchByEmailAndYear(std::string, std::string);
};

#endif /* ClassBookRepository_hpp */
