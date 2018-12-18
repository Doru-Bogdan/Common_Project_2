//
//  main.cpp
//  lab-7
//
//  Created by Doru Mancila on 13/11/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include <iostream>
#include "Activity.hpp"
#include "Room.hpp"
#include "Role.hpp"
#include "Person.hpp"
#include "StudentRole.hpp"
#include "TeacherRole.hpp"
#include "PersonRepository.hpp"
#include "RoomRepository.hpp"
#include "ActivityRepository.hpp"
#include <vector>


int main() {
    /*Teacher t;
    std::cin >> t;
    std::cout << t;
    Student s;
    std::cin >> s;
    std::cout << s;*/
    //int n;
    /*std::vector<Person*> v;
    std::cout << "Introduceti numarul de persoane: ";
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        Teacher *t = new Teacher;
        std::cin >> *t;
        v.push_back(t);
    }
    for (int i = 0; i < n; i++) {
        std::cout << *v[i];
    }
    
    std::cout << "Introduceti numarul de persoane: ";
    int m;
    std::cin >> m;
    for (int i = 0; i < m; i++) {
        Student *s = new Student;
        std::cin >> *s;
        v.push_back(s);
    }
    for (int i = 0; i < n + m; i++) {
        std::cout << v[i]->getOccupation();
    }
    
    std::vector<Person*> pers;
    std::vector<Room*> rooms;
    std::vector<Activity*> actv;
    
    rooms.push_back(new Room("A3"));
    pers.push_back(new Person("Doru", "Bogdan", 1234));
    actv.push_back(new Activity(rooms[0], pers[0], "Pregatire IT"));
    pers[0]->addRole(new TeacherRole);
    std::cout << pers[0]->getRole();
    //StudentRole *p = dynamic_cast<StudentRole*>(pers[0]->displayRole());
    //std::cout << p->getNr();
    */
    
    
    
    PersonRepository pr;
    pr.add(new Person("Doru", "Mancila", 1234, "doru@gmail.com"));
    pr.add(new Person("Adrian", "Balica", 1243, "student", "balica9@gmail.com"));
    Person* p = NULL;
    try {
        p = pr.searchByEmail("doru@gmail.com");
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
    }
    p->addRole(new StudentRole(200, 2, "buget"));
    p->addRole(new TeacherRole);
    if (p != NULL) {
        std::cout << p->getEmail() << "\n";
    }
    
    std::vector<Person*> pers;
    try {
        pers = pr.searchByRole(2);
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
    }
    for (int i = 0; i < pers.size(); i++) {
        std::cout << pers[i]->getFirstName() << " ";
    }
    
    /*
    RoomRepository rr;
    rr.add(new Room("Pompeiu"));
    rr.add(new Room("Nr.215"));
    
    std::cout << rr.findByName("Pompeiu")->getName() << "\n";*/
    
    /*
    ActivityRepository ar;
    Person p("Doru", "Mancila", 1234, "student", "doru@gmail.com");
    Room r("Pompeiu");
    ar.add(new Activity(&r, &p, "Curs"));
    ar.add(new Activity(&r, &p, "Curs2"));
    Activity *a = NULL;
    try {
        a = ar.findByLocation("Pompeiu");
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
    }
    if(a != NULL)
        std::cout << a->getOwner() << "\n";
    std::vector<Activity*> va;
    va = ar.searchByOwner("Mancila");
    for (int i = 0; i < va.size(); i++) {
        std::cout << va[i]->getDescription() << " ";
    }*/
    

    return 0;
}
