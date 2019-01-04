//
//  ActivityRepository.hpp
//  lab-7
//
//  Created by Doru Mancila on 04/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#ifndef ActivityRepository_hpp
#define ActivityRepository_hpp

#include "Repository.hpp"
#include "Activity.hpp"
#include <vector>

class ActivityRepository: public Repository<Activity> {
public:
    Activity* findByLocation(std::string locationName);
    Activity* findByDescription(std::string description);
    std::vector<Activity*> searchByOwner(std::string ownerName);
};

#endif /* ActivityRepository_hpp */
