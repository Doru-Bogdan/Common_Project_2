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
    Discipline(std::string name, Activity* activity);
    Discipline(std::string name, std::vector<Activity*> activities);
    std::string getName();
    Activity* getActivity(std::string name);
    std::vector<Activity*> getActivities();
    void setName(std::string name);
    void setActivities(std::vector<Activity*> activities);
    void addActivity(Activity* activity);
    void addActivities(std::vector<Activity*> activities);
    void removeActivity(std::string name);
    void addParticipant(Person* person);
    void removeParticipantByCnp(int CNP);
    void removeByFullName(std::string firstName, std::string lastName);
private:
    std::string mName;
    std::vector<Activity*> mActivities;
    std::vector<Person*> mParticipants; 
};

#endif /* Discipline_hpp */
