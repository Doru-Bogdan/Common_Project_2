//
//  Activity.hpp
//  lab-7
//
//  Created by Doru Mancila on 27/11/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#ifndef Activity_hpp
#define Activity_hpp

#include <iostream>
#include "Room.hpp"
#include "Person.hpp"

class Activity {
public:
    Activity(Room*, Person*, std::string);
    
private:
    Room* mLocation;
    Person* mOwner;
    std::string mDescription;
};
#endif /* Activity_hpp */
