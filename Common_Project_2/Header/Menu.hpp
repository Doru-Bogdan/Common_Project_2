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
    
    //Fuctions that checks the input
    bool CheckInput(std::string);
    
    //Functions for principal menu
    void StartMenu();
    void PersonMenu();
    void ActivityMenu();
    void DisciplineMenu();
    void ClassBookMenu();
    void RepositoryMenu();
    
    //Functions for person menu
    void AddPerson();
    void AddRole(Person*);
    void DeletePerson();
    void RemoveRole();
    void EditPerson();
    
    //Functions for activity menu
    void AddActivity();
    void DeleteActivity();
    
    //Functions for discipline menu
    void CreateDiscipline();
    void DeleteDiscipline();
    void EnrollStudent();
    void RemoveStudentFromDiscipline();
    
    //Functions for classbook menu
    void CreateClassBook();
    void DeleteClassBook();
    void AddStudent();
    void RemoveStudentFromClassBook();
    void AddMark();
    void SearchStudent();
    
    //Functions for repository menu
    void SearchInRepo();
    
private:
    PersonRepository persons;
    RoomRepository rooms;
    ActivityRepository activities;
    ClassBookRepository classBooks;
    DisciplineRepository disciplines;
};

#endif /* Menu_hpp */
