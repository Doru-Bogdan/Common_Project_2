//
//  Menu.cpp
//  Common_Project_2
//
//  Created by Doru Mancila on 30/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "Menu.hpp"
#include <string>


bool Menu::CheckInput(std::string input) {
    int number = 0;
    try {
        number = std::stoi(input);
    } catch(std::invalid_argument const e) {
        return false;
    }
    return true;
}

void Menu::StartMenu() {
initialStart:
    
    std::cout << "                    Start Menu\n\n";
    std::cout << "1. Persons\n2. Activities\n3. Disciplines\n4. ClassBook\n5. Repositories\n\n6. Exit\n\n";
    std::string inputString;
    
start:
    
    do {
        std::cout << ">";
        std::cin >> inputString;
    } while (!CheckInput(inputString));
    int input = std::stoi(inputString);
    switch (input) {
        case Type::PERSON:
            PersonMenu();
            goto initialStart;
            
        case Type::ACTIVITY:
            ActivityMenu();
            goto initialStart;
            
        case Type::DISCIPLINE:
            DisciplineMenu();
            goto initialStart;
            
        case Type::CLASSBOOK:
            ClassBookMenu();
            goto initialStart;
            
        case Type::REPOSITORY:
            RepositoryMenu();
            goto initialStart;
            
        case Type::EXIT:
            break;
            
        default:
            std::cout << "Wrong input!\n";
            goto start;
            break;
    }
}

void Menu::PersonMenu() {
    enum Type {
        ADD_PERSON = 1,
        DELETE_PERSON,
        MODIFY_PERSON,
        ADD_ROLE,
        REMOVE_ROLE,
        RETURN
    };
initialStart:
    
    std::cout << "                    Person Menu\n\n";
    std::cout << "1. Add Persons\n2. Delete Persons\n3. Modify Persons\n4. Add role to a person\n5. Remove role from a person\n\n6. Return\n\n";
    std::string inputString;
    
start:
    
    do {
        std::cout << ">";
        std::cin >> inputString;
    } while (!CheckInput(inputString));
    int input = std::stoi(inputString);
    switch (input) {
        case ADD_PERSON:
            goto initialStart;
            
        case DELETE_PERSON:
            goto initialStart;
            
        case MODIFY_PERSON:
            goto initialStart;
            
        case ADD_ROLE:
            goto initialStart;
            
        case REMOVE_ROLE:
            goto initialStart;
            
        case RETURN:
            break;
            
        default:
            std::cout << "Wrong input!\n";
            goto start;
            break;
    }
}

void Menu::ActivityMenu() {
    enum Type {
        ADD_ACTIVITY = 1,
        DELETE_ACTIVITY,
        MODIFY_ACTIVITY,
        RETURN
    };
initialStart:
    
    std::cout << "                    Activity Menu\n\n";
    std::cout << "1. Add Activity\n2. Delete Activity\n3. Modify Activity\n\n4. Return\n\n";
    std::string inputString;
    
start:
    
    do {
        std::cout << ">";
        std::cin >> inputString;
    } while (!CheckInput(inputString));
    int input = std::stoi(inputString);
    switch (input) {
        case ADD_ACTIVITY:
            goto initialStart;
            
        case DELETE_ACTIVITY:
            goto initialStart;
            
        case MODIFY_ACTIVITY:
            goto initialStart;
            
        case RETURN:
            break;
            
        default:
            std::cout << "Wrong input!\n";
            goto start;
            break;
    }
}

void Menu::DisciplineMenu() {
    enum Type {
        CREATE_DISCIPLINE = 1,
        DELETE_DISCIPLINE,
        MODIFY_DISCIPLINE,
        ENROLL_STUDENT,
        REMOVE_STUDENT,
        RETURN
    };
initialStart:
    
    std::cout << "                    Discipline Menu\n\n";
    std::cout << "1. Create discipline\n2. Delete discipline\n3. Modify discipline\n4. Enroll student\n5. Remove student\n\n6. Return\n\n";
    std::string inputString;
    
start:
    
    do {
        std::cout << ">";
        std::cin >> inputString;
    } while (!CheckInput(inputString));
    int input = std::stoi(inputString);
    switch (input) {
        case CREATE_DISCIPLINE:
            goto initialStart;
            
        case DELETE_DISCIPLINE:
            goto initialStart;
            
        case MODIFY_DISCIPLINE:
            goto initialStart;
            
        case ENROLL_STUDENT:
            goto initialStart;
            
        case REMOVE_STUDENT:
            goto initialStart;
            
        case RETURN:
            break;
            
        default:
            std::cout << "Wrong input!\n";
            goto start;
            break;
    }
}

void Menu::ClassBookMenu() {
    enum Type {
        CREATE_CLASSBOOK = 1,
        DELETE_CLASSBOOK,
        ADD_STUDENT,
        REMOVE_STUDENT,
        ADD_MARK,
        MODIFY_MARK,
        SEARCH_STUDENT,
        RETURN
    };
initialStart:
    
    std::cout << "                    Classbook Menu\n\n";
    std::cout << "1. Create classbook\n2. Delete classbook\n3. Add student\n4. Remove student\n5. Add mark\n6. Modify Mark\n7. Search student\n\n8. Return\n\n";
    std::string inputString;
    
start:
    
    do {
        std::cout << ">";
        std::cin >> inputString;
    } while (!CheckInput(inputString));
    int input = std::stoi(inputString);
    switch (input) {
        case CREATE_CLASSBOOK:
            goto initialStart;
            
        case DELETE_CLASSBOOK:
            goto initialStart;
            
        case ADD_STUDENT:
            goto initialStart;
            
        case REMOVE_STUDENT:
            goto initialStart;
            
        case ADD_MARK:
            goto initialStart;
            
        case MODIFY_MARK:
            goto initialStart;
            
        case SEARCH_STUDENT:
            goto initialStart;
            
        case RETURN:
            break;
            
        default:
            std::cout << "Wrong input!\n";
            goto start;
            break;
    }
}

void Menu::RepositoryMenu() {
    enum Type {
        SEARCH_IN_REPO = 1,
        MODIFY_REPO,
        RETURN
    };
initialStart:
    
    std::cout << "                    Repository Menu\n\n";
    std::cout << "1. Search in repository\n2. Modify repository\n\n3. Return\n\n";
    std::string inputString;
    
start:
    
    do {
        std::cout << ">";
        std::cin >> inputString;
    } while (!CheckInput(inputString));
    int input = std::stoi(inputString);
    switch (input) {
        case SEARCH_IN_REPO:
            goto initialStart;
            
        case MODIFY_REPO:
            goto initialStart;
            
        case RETURN:
            break;
            
        default:
            std::cout << "Wrong input!\n";
            goto start;
            break;
    }
}






