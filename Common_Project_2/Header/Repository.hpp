//
//  Repository.hpp
//  lab-7
//
//  Created by Doru Mancila on 04/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#ifndef Repository_hpp
#define Repository_hpp

#include <iostream>
#include <vector>

template <class Entity>

class Repository {
public:
    void add(Entity* entity) {
        mEntities.push_back(entity);
    }
    void remove(Entity* entity){
        for (int i = 0; i < mEntities.size(); i++)
            if (mEntities[i] == entity) {
                mEntities[i] = mEntities.back();
                mEntities.pop_back();
                break;
            }
    }
    
protected:
    std::vector<Entity*> mEntities;
};
#endif /* Repository_hpp */
