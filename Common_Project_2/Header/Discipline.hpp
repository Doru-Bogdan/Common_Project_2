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
    Discipline(std::string, Activity*);
    Discipline(std::string, std::vector<Activity*>);
    std::string getName();
    Activity* getActivity(std::string);
    std::vector<Activity*> getActivities();
    void setName(std::string);
    void setActivities(std::vector<Activity*>);
    void addActivity(Activity*);
    void addActivities(std::vector<Activity*>);
    void removeActivity(std::string);
    void addParticipant(Person*);
    void removeParticipantByCnp(int);
    void removeByFullName(std::string, std::string);
private:
    std::string mName;
    std::vector<Activity*> mActivities;
    std::vector<Person*> mParticipants; 
};

#endif /* Discipline_hpp */
