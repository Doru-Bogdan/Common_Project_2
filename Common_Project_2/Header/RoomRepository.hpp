//
//  RoomRepository.hpp
//  lab-7
//
//  Created by Doru Mancila on 04/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#ifndef RoomRepository_hpp
#define RoomRepository_hpp

#include "Repository.hpp"
#include "Room.hpp"

class RoomRepository:public Repository<Room> {
public:
    Room* findByName(std::string);
};

#endif /* RoomRepository_hpp */
