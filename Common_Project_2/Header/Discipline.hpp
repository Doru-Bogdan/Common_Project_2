//
//  Discipline.hpp
//  Common_Project_2
//
//  Created by Doru Mancila on 18/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#ifndef Discipline_hpp
#define Discipline_hpp

#include "Activity.hpp"

class Discipline {
public:
    std::string getName();
private:
    std::string mName;
    std::vector<Activity*> mActivities;
};
//TO DO seteri, getteri, functii de add, constructori
#endif /* Discipline_hpp */
