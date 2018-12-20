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
    Discipline();
    Discipline(std::string, Activity*);
    std::string getName();
    Activity* getActivity(std::string);
    std::vector<Activity*> getActivities();
private:
    std::string mName;
    std::vector<Activity*> mActivities;
};
//TO DO seteri, getteri, functii de add, constructori
#endif /* Discipline_hpp */
