//
//  Course.hpp
//  Common_Project_2
//
//  Created by Doru Mancila on 18/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#ifndef Course_hpp
#define Course_hpp

#include "Activity.hpp"

class Course: public Activity {
public:
    Course();
    Course(Room*, Person*, std::string);
    Course(Room*, Person*, std::string, std::vector<Person*>);
private:
    std::vector<Person*> mStudent;
};

#endif /* Course_hpp */

//clasa scoasa din functiune
