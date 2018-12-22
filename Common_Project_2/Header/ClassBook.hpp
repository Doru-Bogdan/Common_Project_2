//
//  ClassBook.hpp
//  Common_Project_2
//
//  Created by Doru Mancila on 19/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#ifndef ClassBook_hpp
#define ClassBook_hpp

#include "Person.hpp"

class ClassBook {
public:
    ClassBook(int);
    void add(Person*);
    void removeByCNP(int);
    void removeByEmail(std::string);
    Person* searchByLastName(std::string);
    Person* searchByFirstName(std::string);
    Person* searchByFullName(std::string, std::string);
    Person* searchByCNP(int);
    Person* searchByEmail(std::string);
    std::vector<Person*> getClassBook();
    long getSize();
private:
    int mStudyGroup;
    std::vector<Person*> mClassBook;
    
};

#endif /* ClassBook_hpp */
