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
    AdministrativeRole(std::vector<Room*> rooms);
    AdministrativeRole(Room* room);
    Room* getRoom(std::string name);
    std::vector<Room*> getAllRooms();
    void addRoom(Room* room);
    void removeRoom(std::string name);
private:
    std::vector<Room*> mRoomsAdministered;
};

#endif /* AdministrativeRole_hpp */
