//
//  Menu.cpp
//  Common_Project_2
//
//  Created by Doru Mancila on 30/12/2018.
//  Copyright © 2018 Doru Mancila. All rights reserved.
//

#include "Menu.hpp"
#include "StudentRole.hpp"
#include "TeacherRole.hpp"
#include "AdministrativeRole.hpp"
#include "GuestRole.hpp"
#include <string>

bool Menu::CheckInput(std::string input) {
    int number = 0;
    try {
        number = std::stoi(input);
    } catch(std::invalid_argument) {
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
            system("clear");
            PersonMenu();
            system("clear");
            goto initialStart;
            
        case Type::ACTIVITY:
            system("clear");
            ActivityMenu();
            system("clear");
            goto initialStart;
            
        case Type::DISCIPLINE:
            system("clear");
            DisciplineMenu();
            system("clear");
            goto initialStart;
            
        case Type::CLASSBOOK:
            system("clear");
            ClassBookMenu();
            system("clear");
            goto initialStart;
            
        case Type::REPOSITORY:
            system("clear");
            RepositoryMenu();
            system("clear");
            goto initialStart;
            
        case Type::EXIT:
            system("clear");
            break;
            
        default:
            std::cout << "Wrong input!\n";
            goto start;
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
            system("clear");
            AddPerson();
            system("clear");
            goto initialStart;
            
        case DELETE_PERSON:
            system("clear");
            DeletePerson();
            system("clear");
            goto initialStart;
            
        case MODIFY_PERSON:
            system("clear");
            //TO DO
            //system("clear");
            goto initialStart;
            
        case ADD_ROLE: {
            system("clear");
            std::string firstName, lastName;
            std::cout << "Enter first name= ";
            std::cin >> firstName;
            std::cout << "Enter last name= ";
            std::cin >> lastName;
            Person* person;
            person = persons.searchByFullName(firstName, lastName);
            AddRole(person);
            system("clear");
            goto initialStart;
        }
            
        case REMOVE_ROLE:
            system("clear");
            RemoveRole();
            system("clear");
            goto initialStart;
            
        case RETURN:
            system("clear");
            break;
            
        default:
            std::cout << "Wrong input!\n";
            goto start;
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
            system("clear");
            AddActivity();
            system("clear");
            goto initialStart;
            
        case DELETE_ACTIVITY:
            system("clear");
            DeleteActivity();
            system("clear");
            goto initialStart;
            
        case MODIFY_ACTIVITY:
            system("clear");
            //TO DO
            //system("clear");
            goto initialStart;
            
        case RETURN:
            system("clear");
            break;
            
        default:
            std::cout << "Wrong input!\n";
            goto start;
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
            system("clear");
            CreateDiscipline();
            system("clear");
            goto initialStart;
            
        case DELETE_DISCIPLINE:
            system("clear");
            DeleteDiscipline();
            system("clear");
            goto initialStart;
            
        case MODIFY_DISCIPLINE:
            system("clear");
            //TO DO
            //system("clear");
            goto initialStart;
            
        case ENROLL_STUDENT:
            system("clear");
            EnrollStudent();
            system("clear");
            goto initialStart;
            
        case REMOVE_STUDENT:
            system("clear");
            RemoveStudentFromDiscipline();
            system("clear");
            goto initialStart;
            
        case RETURN:
            system("clear");
            break;
            
        default:
            std::cout << "Wrong input!\n";
            goto start;
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
            system("clear");
            CreateClassBook();
            system("clear");
            goto initialStart;
            
        case DELETE_CLASSBOOK:
            system("clear");
            DeleteClassBook();
            system("clear");
            goto initialStart;
            
        case ADD_STUDENT:
            system("clear");
            AddStudent();
            system("clear");
            goto initialStart;
            
        case REMOVE_STUDENT:
            system("clear");
            RemoveStudentFromClassBook();
            system("clear");
            goto initialStart;
            
        case ADD_MARK:
            system("clear");
            AddMark();
            system("clear");
            goto initialStart;
            
        case MODIFY_MARK:
            system("clear");
            //TO DO
            //system("clear");
            goto initialStart;
            
        case SEARCH_STUDENT:
            system("clear");
            SearchStudent();
            goto initialStart;
            
        case RETURN:
            system("clear");
            break;
            
        default:
            std::cout << "Wrong input!\n";
            goto start;
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
            system("clear");
            SearchInRepo();
            system("clear");
            goto initialStart;
            
        case MODIFY_REPO:
            system("clear");
            //TODO
            //system("clear");
            goto initialStart;
            
        case RETURN:
            system("clear");
            break;
            
        default:
            std::cout << "Wrong input!\n";
            goto start;
    }
}

void Menu::AddPerson() {
    Person* person = new Person();
    std::cin >> *person;
    std::cout << "Do you want this person to have a role?\n1. Yes\n2. No\n\n";
    std::string inputString;
    
start:
    
    do {
        std::cout << ">";
        std::cin >> inputString;
    } while (!CheckInput(inputString));
    int input = std::stoi(inputString);
    switch (input) {
        case 1:
            AddRole(person);
            system("clear");
            break;
            
        case 2:
            system("clear");
            break;
            
        default:
            std::cout << "Wrong input!\n";
            goto start;
    }
    persons.add(person);
}

void Menu::AddRole(Person* person) {
    enum Type {
        STUDENT_ROLE = 1,
        TEACHER_ROLE,
        ADMINISTRATIVE_ROLE,
        GUEST_ROLE,
        RETURN
    };
    
startInitial:
    
    std::cout << "1. Student role\n2. Teacher role\n3. Administrative role\n4. Guest role\n\n5. Return\n\n";
    
start:
    
    std::string inputString;
    do {
        std::cout << ">";
        std::cin >> inputString;
    } while (!CheckInput(inputString));
    int input = std::stoi(inputString);
    switch (input) {
        case STUDENT_ROLE: {
            int iDNumber;
            std:: cout << "Enter iD number= ";
            std::cin >> iDNumber;
            int studyYear;
            std:: cout << "Enter study year= ";
            std::cin >> studyYear;
            std::string financialForm;
            std:: cout << "Enter financial form= ";
            std::cin >> financialForm;
            int studyGroup;
            std:: cout << "Enter study group= ";
            std::cin >> studyGroup;
            person->addRole(new StudentRole(iDNumber, studyYear, studyGroup, financialForm));
            system("clear");
            goto startInitial;
        }
            
        case TEACHER_ROLE: {
            std::string studies;
            std::cout << "Enter studies= ";
            std::cin >> studies;
            std::string didacticFunction;
            std::cout << "Enter didactic function= ";
            std::cin >> didacticFunction;
            person->addRole(new TeacherRole(studies, didacticFunction));
            system("clear");
            goto startInitial;
        }
            
        case ADMINISTRATIVE_ROLE: {
            person->addRole(new AdministrativeRole());
            system("clear");
            goto startInitial;
        }
            
        case GUEST_ROLE: {
            person->addRole(new GuestRole());
            system("clear");
            goto startInitial;
        }
            
        case RETURN:
            system("clear");
            break;
            
        default:
            std::cout << "Wrong input!\n";
            goto start;
    }
}

void Menu::DeletePerson() {
    enum Type {
        DELETE_BY_FULLNAME = 1,
        DELETE_BY_CNP,
        RETURN
    };
startInitial:
    
    std::cout << "1. Delete by full name\n2. Delete by CNP\n\n3. Return\n\n";
    
start:
    
    std::string inputString;
    do {
        std::cout << ">";
        std::cin >> inputString;
    } while (!CheckInput(inputString));
    int input = std::stoi(inputString);
    switch (input) {
        case DELETE_BY_FULLNAME: {
            std::string firstName, lastName;
            std::cout << "Enter first name= ";
            std::cin >> firstName;
            std::cout << "Enter last name= ";
            std::cin >> lastName;
            Person* person;
            person = persons.searchByFullName(firstName, lastName);
            persons.remove(person);
            system("clear");
            goto startInitial;
        }
        case DELETE_BY_CNP: {
            int CNP;
            std::cout << "Enter CNP= ";
            std::cin >> CNP;
            Person* person;
            person = persons.searchByCNP(CNP);
            persons.remove(person);
            system("clear");
            goto startInitial;
        }
            
        case RETURN:
            system("clear");
            break;
            
        default:
            std::cout << "Wrong input!\n";
            goto start;
    }
}

void Menu::RemoveRole() {
    std::string firstName, lastName;
    std::cout << "Enter first name= ";
    std::cin >> firstName;
    std::cout << "Enter last name= ";
    std::cin >> lastName;
    Person* person;
    person = persons.searchByFullName(firstName, lastName);
    std::cout << "Enter role you want to remove= ";
    std::string roleString;
    std::cin >> roleString;
    int role = 0;
    if (roleString == "student") {
        role = 1;
    } else if (roleString == "teacher") {
        role = 2;
    } else if (roleString == "guest") {
        role = 3;
    } else if (roleString == "administrative") {
        role = 4;
    }
    person->removeRole(role);
}

void Menu::AddActivity() {
    std::string name;
    std::cout << "Enter activity name= ";
    std::cin >> name;
    Person* person = NULL;
    
start:
    
    std::string firstName, lastName, roomName;
    std::cout << "Enter owner first name= ";
    std::cin >> firstName;
    std::cout << "Enter owner last name= ";
    std::cin >> lastName;
    try {
        person = persons.searchByFullName(firstName, lastName);
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
        goto start;
    }
    std::cout << "Enter room name= ";
    std::cin >> roomName;
    Room* room = new Room(roomName);
    Activity* activity = new Activity(room, person, name);
    activities.add(activity);
}

void Menu::DeleteActivity() {
start:
    
    std::string activityName;
    Activity* activity = NULL;
    std::cout << "Enter name of activity= ";
    try {
        activity = activities.findByDescription(activityName);
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
        goto start;
    }
    activities.remove(activity);
}

void Menu::CreateDiscipline() {
    std::string disciplineName, activityName;
    int input;
    std::cout << "Enter discipline name= ";
    std::cin >> disciplineName;
    std::cout << "Select how manu acticities does this discipline include= ";
    std::cin >> input;
    std::vector<Activity*> _activities;
    Activity* activity = NULL;
    for (int i = 0; i < input; i++) {
    
start:
    
    std::cout << "Enter activity name= ";
    std::cin >> activityName;
    try {
        activity = activities.findByDescription(activityName);
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
        goto start;
    }
    _activities.push_back(activity);
    }
    Discipline* discipline = new Discipline(disciplineName, _activities);
    disciplines.add(discipline);
}

void Menu::DeleteDiscipline() {
    
start:
    
    std::string disciplineName;
    std::cout << "Enter discipline name= ";
    std::cin >> disciplineName;
    Discipline* discipline;
    try {
        discipline = disciplines.searchByName(disciplineName);
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
        goto start;
    }
    disciplines.remove(discipline);
}

void Menu::EnrollStudent() {
    std::string firstName, lastName, disciplineName;
    Person* student;
    Discipline* discipline;
    
start_1:
    
    std::cout << "Enter student first name= ";
    std::cin >> firstName;
    std::cout << "Enter student last name= ";
    std::cin >> lastName;
    try {
        student = persons.searchByFullName(firstName, lastName);
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
        goto start_1;
    }
    if (!student->isStudent()) {
        goto start_1;
    }
    
start_2:
    
    std::cout << "Enter discipline to enroll= ";
    std::cin >> disciplineName;
    try {
        discipline = disciplines.searchByName(disciplineName);
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
        goto start_2;
    }
    discipline->addParticipant(student);
}

void Menu::RemoveStudentFromDiscipline() {
    std::string firstName, lastName, disciplineName;
    Discipline* discipline;
    
start:
    
    std::cout << "Enter discipline= ";
    std::cin >> disciplineName;
    try {
        discipline = disciplines.searchByName(disciplineName);
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
        goto start;
    }
    std::cout << "Enter student first name= ";
    std::cin >> firstName;
    std::cout << "Enter student last name= ";
    std::cin >> lastName;
    try {
        discipline->removeByFullName(firstName, lastName);
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
        goto start;
    }
}

void Menu::CreateClassBook() {
    std::string year;
    int studyGroup;
    std::cout << "Enter year= ";
    std::cin >> year;
    std::cout << "Enter study group= ";
    std::cin >> studyGroup;
    ClassBook* classBook = new ClassBook(studyGroup, year);
    classBooks.add(classBook);
}

void Menu::DeleteClassBook() {
    std::string year;
    int studyGroup;
    ClassBook* classBook;
    
start:
    
    std::cout << "Enter year= ";
    std::cin >> year;
    std::cout << "Enter study group= ";
    std::cin >> studyGroup;
    try {
        classBook = classBooks.searchByStudyGroupAndYear(studyGroup, year);
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
        goto start;
    }
    classBooks.remove(classBook);
}

void Menu::AddStudent() {
    std::string firstName, lastName, classBookYear;
    int studyGroup;
    Person* student;
    ClassBook* classBook;
    
start_1:
    
    std::cout << "Enter student first name= ";
    std::cin >> firstName;
    std::cout << "Enter student last name= ";
    std::cin >> lastName;
    try {
        student = persons.searchByFullName(firstName, lastName);
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
        goto start_1;
    }
    
start_2:
    
    std::cout << "Enter classbook year= ";
    std::cin >> classBookYear;
    std::cout << "Enter classbook study group= ";
    std::cin >> studyGroup;
    try {
        classBook = classBooks.searchByStudyGroupAndYear(studyGroup, classBookYear);
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
        goto start_2;
    }
    try {
        classBook->addStudent(student);
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
        goto start_1;
    }
}

void Menu::RemoveStudentFromClassBook() {
    std::string year, firstName, lastName;
    int studyGroup;
    ClassBook* classBook;
    
start:
    
    std::cout << "Enter year of classbook= ";
    std::cin >> year;
    std::cout << "Enter study group for classbook= ";
    std::cin >> studyGroup;
    try {
        classBook = classBooks.searchByStudyGroupAndYear(studyGroup, year);
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
        goto start;
    }
    std::cout << "Enter students first name= ";
    std::cin >> firstName;
    std::cout << "Enter students last name= ";
    std::cin >> lastName;
    classBook->removeByFullName(firstName, lastName);
}

void Menu::AddMark() {
    Discipline* discipline;
    ClassBook* classBook;
    std::string firstName, lastName, year, disciplineName;
    int studyGroup;
    float mark;
    
start_1:
    
    std::cout << "Enter classbooks year = ";
    std::cin >> year;
    std::cout << "Enter classbooks study group= ";
    std::cin >> studyGroup;
    try {
        classBook = classBooks.searchByStudyGroupAndYear(studyGroup, year);
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
        goto start_1;
    }
    
start_2:
    
    std::cout << "Enter discipline= ";
    std::cin >> disciplineName;
    try {
        discipline = disciplines.searchByName(disciplineName);
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
        goto start_2;
    }
    
start_3:
    
    std::cout << "Enter students first name= ";
    std::cin >> firstName;
    std::cout << "Enter students last name= ";
    std::cin >> lastName;
    try {
        classBook->searchByFullName(firstName, lastName);
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
        goto start_3;
    }
    std::cout << "Enter mark= ";
    std::cin >> mark;
    classBook->addMark(mark, discipline, firstName, lastName);
}

void Menu::SearchStudent() {
    std::string firstName, lastName, year;
    Person* student;
    
start:
    
    std::cout << "Enter students first name= ";
    std::cin >> firstName;
    std::cout << "Enter students last name= ";
    std::cin >> lastName;
    std::cout << "Enter year of study(ex. 2019-2020)= ";
    std::cin >> year;
    try {
        student = classBooks.searchByFullNameAndYear(firstName, lastName, year);
    } catch (std::runtime_error const e) {
        std::cout << e.what() << "\n";
        goto start;
    }
    std::cout << *student;
}

void Menu::SearchInRepo() {
    
start_initial:
    
    enum Type {
        PERSONS = 1,
        ROOMS,
        ACTIVITIES,
        CLASSBOOKS,
        DISCIPLINES,
        RETURN
    };
    std::cout << "What repository do you want to acces?\n";
    std::cout << "1. Persons\n2. Rooms\n3. Activities\n4. ClassBooks\n5. Discipline\n\n6. Return\n\n";
    std::string inputString;
    
start:
    
    do {
        std::cout << ">";
        std::cin >> inputString;
    } while (!CheckInput(inputString));
    int input = std::stoi(inputString);
    switch (input) {
        case PERSONS: {
            std::string firstName, lastName;
            Person* person;
            
        start_1:
            
            std::cout << "Enter students first name= ";
            std::cin >> firstName;
            std::cout << "Enter students last name= ";
            std::cin >> lastName;
            try {
                person = persons.searchByFullName(firstName, lastName);
            } catch (std::runtime_error const e) {
                std::cout << e.what() << "\n";
                goto start_1;
            }
            std::cout << *person;
            goto start_initial;
        }
        case ROOMS: {
            std::string name;
            
        start_2:
            
            std::cout << "Enter room name= ";
            std::cin >> name;
            try {
                rooms.findByName(name);
            } catch (std::runtime_error const e) {
                std::cout << e.what() <<"\n";
                goto start_2;
            }
            std::cout << "Camera exista";
            goto start_initial;
        }
            
        case ACTIVITIES: {
            std::string acticityName;
            Activity* activity;
            
        start_3:
            
            std::cout << "Enter activity name= ";
            std::cin >> acticityName;
            try {
                activity = activities.findByDescription(acticityName);
            } catch (std::runtime_error const e) {
                std::cout << e.what() << "\n";
                goto start_3;
            }
            std::cout << "Location=  " << activity->getLocation() << "\n";
            std::cout << "Owner= " << activity->getOwner() << "\n";
            goto start_initial;
        }
            
        case CLASSBOOKS: {
            std::string year;
            int studyGroup;
            ClassBook* classBook;
            
        start_4:
            
            std::cout << "Enter year= ";
            std::cin >> year;
            std::cout << "Enter study group= ";
            std::cin >> studyGroup;
            try {
                classBook = classBooks.searchByStudyGroupAndYear(studyGroup, year);
            } catch (std::runtime_error const e) {
                std::cout << e.what() << "\n";
                goto start_4;
            }
            std::cout << "This classbook has " << classBook->getSize() << " students.\n";
            goto start_initial;
        }
            
        case DISCIPLINES: {
            std::string disciplineName;
            Discipline* discipline;
            
        start_5:
            
            std::cout << "Enter disciplines name= ";
            std::cin >> disciplineName;
            try {
                discipline = disciplines.searchByName(disciplineName);
            } catch (std::runtime_error const e) {
                std::cout << e.what() << "\n";
                goto start_5;
            }
            std::cout << "Discipline has " << discipline->getSizeActivities() << " activities.\n";
            std::cout << "Discipline has " << discipline->getSizeParticipants() << " participants.\n";
        }
           
        case RETURN:
            system("clear");
            break;
            
        default:
            std::cout << "Wrong input!\n";
            goto start;
    }
}
