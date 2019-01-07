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
#include "ClassBook.hpp"
#include <vector>
#include "Menu.hpp"


int main() {
    
    //Check if teacher class is working correctly
    /*Teacher t;
    std::cin >> t;
    std::cout << t;
    Student s;
    std::cin >> s;
    std::cout << s;*/
    //int n;
    
    //Check if person, rooms and activity classes are working corretly
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
    
    //Check if Classbook and PersonRepository classes are working correctly
    /*
    PersonRepository pr;
    pr.add(new Person("Doru", "Mancila", 1234, "doru@gmail.com"));
    pr.add(new Person("Adrian", "Balica", 1243, "balica@gmail.com"));
    Person* p = NULL;
    try {
        p = pr.searchByEmail("doru@gmail.com");
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
    }
    p->addRole(new StudentRole(200, 2, 252, "buget"));
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
        std::cout << pers[i]->getFirstName() << "\n";
    }
    
    ClassBook cl(252, "2018-2019");
    try {
        cl.addStudent(p);
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
    }
    Person* q;
    q = pr.searchByEmail("balica@gmail.com");
    q->addRole(new StudentRole(20, 2, 252, "buget"));
    q->addRole(new TeacherRole);
    std::cout << cl.getSize() << "\n";
    cl.addStudent(q);
    std::cout << cl.getSize() << "\n";
    cl.removeByCNP(1243);
    std::cout << cl.getSize() << "\n";*/
    
    //Check if discipline class is working correctly
    /*
    Discipline d("POO", new Activity);
    Person *p = new Person("Doru", "Mancila", 1234, "doru@gmail.com");
    p->addRole(new StudentRole(20, 2, 252, "buget"));
    try {
        p->addRole(new StudentRole(20,2,22,"taxa"));
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
    }
    StudentRole* s = dynamic_cast<StudentRole*>(p->displayRole(1));
    std::cout << s->getMarksSize() << "\n";
    d.addParticipant(p);
    std::cout << s->getMarksSize() << "\n";*/
    
    //Check if roomrepository and activityrepository classes are working correctly
    /*
    RoomRepository rr;
    Room* p;
    rr.add(new Room("Pompeiu"));
    rr.add(new Room("Nr.215"));
    p = rr.findByName("Pompeiu");
    std::cout << rr.findByName("Pompeiu")->getName() << "\n";
    std::cout << rr.size() << "\n";
    rr.remove(p);
    std::cout << rr.size() << "\n";*/
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
    
    Menu startMenu;
    startMenu.StartMenu();
    return 0;
    
}
