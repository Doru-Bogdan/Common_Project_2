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
    std::string getSeriesNumber();
    std::string getYear();
    void setSeriesNumber(std::string);
    void setYear(std::string);
    ClassBook* searchByStudyGroup(int);
    Person* searchByFullName(std::string, std::string);
    Person* searchByCNP(int);
    Person* searchByEmail(std::string);
private:
    std::string mSeriesNumber;
    std::string mYear;
};

#endif /* ClassBookRepository_hpp */
