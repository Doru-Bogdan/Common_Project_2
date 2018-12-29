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
    Activity();
    Activity(Room*, Person*, std::string);
    std::string getLocation();
    std::string getOwner();
    std::string getDescription();
    void setLocation(Room*);
    void setOwner(Person*);
    void setDescription(std::string);
protected:
    Room* mLocation;
    Person* mOwner;
    std::string mDescription;
};
#endif /* Activity_hpp */
