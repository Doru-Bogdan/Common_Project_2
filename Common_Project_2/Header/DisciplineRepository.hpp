//
//  DisciplineRepository.hpp
//  Common_Project_2
//
//  Created by Doru Mancila on 29/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#ifndef DisciplineRepository_hpp
#define DisciplineRepository_hpp

#include "Repository.hpp"
#include "Discipline.hpp"

class DisciplineRepository: public Repository<Discipline> {
public:
    Discipline* searchByName(std::string);
};

#endif /* DisciplineRepository_hpp */
