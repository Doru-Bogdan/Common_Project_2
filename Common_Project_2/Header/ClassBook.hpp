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
    ClassBook(int studyGroup, std::string year);
    void addStudent(Person* person);
    void removeByCNP(int CNP);
    void removeByEmail(std::string email);
    void removeByFullName(std::string firstName, std::string lastName);
    Person* searchByLastName(std::string lastName);
    Person* searchByFirstName(std::string firstName);
    Person* searchByFullName(std::string firstName, std::string lastName);
    Person* searchByCNP(int CNP);
    Person* searchByEmail(std::string email);
    std::vector<Person*> getClassBook();
    void addMark(float mark, Discipline* discipline, std::string firstName, std::string lastName);
    void removeMark(std::string discipline, std::string firstName, std::string lastName);
    void updateMark(float mark, std::string discipline, std::string firstName, std::string lastName);
    long getSize();
    int getStudyGroup();
    std::string getYear();
private:
    std::string mYear;
    int mStudyGroup;
    std::vector<Person*> mClassBook;
    
};

#endif /* ClassBook_hpp */
