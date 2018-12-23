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
#include "Discipline.hpp"

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
    void addMark(float, Discipline*, std::string, std::string);
    void removeMark(std::string, std::string, std::string);
    void updateMark(float, std::string, std::string, std::string);
    long getSize();
    int getStudyGroup();
private:
    int mStudyGroup;
    std::vector<Person*> mClassBook;
    
};

#endif /* ClassBook_hpp */
