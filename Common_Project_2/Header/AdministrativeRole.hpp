//
//  AdministrativeRole.hpp
//  lab-7
//
//  Created by Doru Mancila on 27/11/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#ifndef AdministrativeRole_hpp
#define AdministrativeRole_hpp

#include <iostream>
#include "Role.hpp"
#include "Room.hpp"
#include <vector>

class AdministrativeRole:public Role {
public:
    AdministrativeRole();
    AdministrativeRole(std::vector<Room*>);
    AdministrativeRole(Room*);
    Room* getRoom(std::string);
    std::vector<Room*> getAllRooms();
    void addRoom(Room*);
    void removeRoom(std::string);
private:
    std::vector<Room*> mRoomsAdministered;
};

#endif /* AdministrativeRole_hpp */
