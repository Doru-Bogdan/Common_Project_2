//
//  Menu.hpp
//  Common_Project_2
//
//  Created by Doru Mancila on 30/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#ifndef Menu_hpp
#define Menu_hpp

#include "PersonRepository.hpp"
#include "RoomRepository.hpp"
#include "ActivityRepository.hpp"
#include "ClassBookRepository.hpp"
#include "DisciplineRepository.hpp"

class Menu {
public:
    enum Type {
        PERSON = 1,
        ACTIVITY,
        DISCIPLINE,
        CLASSBOOK,
        REPOSITORY,
        EXIT
    };
    
    bool CheckInput(std::string);
    void StartMenu();
    void PersonMenu();
    void ActivityMenu();
    void DisciplineMenu();
    void ClassBookMenu();
    void RepositoryMenu();
    
    void AddPerson();
    void AddRole(Person*);
    void DeletePerson();
    void RemoveRole();
    void AddActivity();
    void DeleteActivity();
    void CreateDiscipline();
    void DeleteDiscipline();
    void EnrollStudent();
    void RemoveStudentFromDiscipline();
    void CreateClassBook();
    void DeleteClassBook();
    void AddStudent();
    void RemoveStudentFromClassBook();
    void AddMark();
    void SearchStudent();
    void SearchInRepo();
    
private:
    PersonRepository persons;
    RoomRepository rooms;
    ActivityRepository activities;
    ClassBookRepository classBooks;
    DisciplineRepository disciplines;
};

#endif /* Menu_hpp */
