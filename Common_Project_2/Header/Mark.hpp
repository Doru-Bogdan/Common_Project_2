//
//  Mark.hpp
//  Common_Project_2
//
//  Created by Doru Mancila on 18/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#ifndef Mark_hpp
#define Mark_hpp

#include "Discipline.hpp"

class Mark {
public:
    Mark();
    Mark(float, Discipline*);
    std::string getCourse();
    float getMark();
    void setDiscipline(Discipline*);
    void setMark(float);
private:
    float mMark;
    Discipline* mDiscipline;
};

#endif /* Mark_hpp */