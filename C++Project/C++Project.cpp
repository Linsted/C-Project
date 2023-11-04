#include <iostream>
using namespace std;
#include "Student.h"
#include "Abiturient.h"
#include "Aeroflot.h"
#include "Book.h"
#include "Worker.h"


int main()
{
    Student student1;
    student1.setSurname("Ivanenko");
    student1.setName("Ivan");
    student1.setSecondName("Ivanovych");
    student1.setFaculty("Math");
    student1.setCourse(2);
    Student student2;
    student2.setSurname("Petrenko");
    student2.setName("Petro");
    student2.setSecondName("Petrovych");
    student2.setFaculty("Physics");
    student2.setCourse(3);

    //Abiturient

    Abiturient firstAbiturient;
    firstAbiturient.setSurname("Sidorov");
    firstAbiturient.setFirstName("Sergii");
    firstAbiturient.setMiddleName("Sergiyovych");
    firstAbiturient.setAddress("123 Main St");
    firstAbiturient.setMarks(4); 

    int* firstAbiturientMarks = firstAbiturient.getMarks();
    for (int i = 0; i < 4; i++) {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> firstAbiturientMarks[i];
    };


    Abiturient secondAbiturient;
    secondAbiturient.setSurname("Kuznetsov");
    secondAbiturient.setFirstName("Igor");
    secondAbiturient.setMiddleName("Igorovych");
    secondAbiturient.setAddress("456 Elm St");
    secondAbiturient.setMarks(5); 
 
    int* secondAbiturientMarks = secondAbiturient.getMarks();
    for (int i = 0; i < 5; i++) {
        cout << "Enter mark " << i + 1 << ": ";
        cin >> secondAbiturientMarks[i];
    };

    Abiturient firstAbiturient1("Sidorov", "Sergii", "Sergiyovych", "123 Main St", 4);
    Abiturient secondAbiturient2("Kuznetsov", "Igor", "Igorovych", "456 Elm St", 5);

    firstAbiturient.checkExclusion();
    secondAbiturient.checkExclusion();

    firstAbiturient.displayInfo();
    secondAbiturient.displayInfo();

    //Abiturient - END

    Aeroflot flight1;
    Aeroflot flight2;
    Aeroflot flight3;
    flight1.setDestination("New York");
    flight1.setFlightNumber("AF123");
    flight1.setAircraftType("Boeing 747");
    flight1.setDepartureTime("12:00");
    flight1.setDaysOfWeek("Monday");
    flight2.setDestination("Los Angeles");
    flight2.setFlightNumber("DL456");
    flight2.setAircraftType("Airbus A320");
    flight2.setDepartureTime("14:30");
    flight2.setDaysOfWeek("Wednesday");
    flight3.setDestination("London");
    flight3.setFlightNumber("BA789");
    flight3.setAircraftType("Boeing 777");
    flight3.setDepartureTime("10:15");
    flight3.setDaysOfWeek("Friday");


    Book book1;
    Book book2;
    book1.setAuthor("George Orwell");
    book1.setTitle("1984");
    book1.setPublisher("Penguin Books");
    book1.setYear(1949);
    book1.setPageCount(328);
    book2.setAuthor("J.K. Rowling");
    book2.setTitle("Harry Potter and the Sorcerer's Stone");
    book2.setPublisher("Scholastic");
    book2.setYear(1997);
    book2.setPageCount(309);


    Worker worker1;
    Worker worker2;
    worker1.setFullName("John D. Doe");
    worker1.setPosition("Engineer");
    worker1.setStartYear(2015);
    worker1.setSalary(50000.0);
    worker2.setFullName("Jane A. Smith");
    worker2.setPosition("Manager");
    worker2.setStartYear(2018);
    worker2.setSalary(60000.0);


    cout << "Student 1: " << student1.getSurname() << ", " << student1.getName() << ", " << student1.getSecondName() << ", " << student1.getFaculty() << ", " << student1.getCourse() << endl;
    cout << "Student 2: " << student2.getSurname() << ", " << student2.getName() << ", " << student2.getSecondName() << ", " << student2.getFaculty() << ", " << student2.getCourse() << endl;



   cout << "Flight 1: Flight Number - " << flight1.getFlightNumber() << ", Departure Time - " << flight1.getDepartureTime() << endl;
   cout << "Flight 2: Flight Number - " << flight2.getFlightNumber() << ", Departure Time - " << flight2.getDepartureTime() << endl;
   cout << "Flight 3: Flight Number - " << flight3.getFlightNumber() << ", Departure Time - " << flight3.getDepartureTime() << endl;

   cout << "Book 1: Title - " << book1.getTitle() << ", Author - " << book1.getAuthor() << endl;
   cout << "Book 2: Title - " << book2.getTitle() << ", Author - " << book2.getAuthor() << endl;


   cout << "Worker 1: Full Name - " << worker1.getFullName() << ", Start Year - " << worker1.getStartYear() << endl;
   cout << "Worker 2: Full Name - " << worker2.getFullName() << ", Start Year - " << worker2.getStartYear() << endl;


   // OOP-3

   Student firstStudent;
   firstStudent.print();

   Student secondStudent("Sidorov","Sergii","Petrovych","04051991", "123 Main St", 0500404040, "Math",2);
   secondStudent.print();

   Student thirdStudent("Kowalski", "Jan", "Andrzej", "15.08.1990", "456 Elm St", 555555555, "Physics", 4);
   thirdStudent.print();







   Aeroflot firstFlight("New York", "AF123", "Boeing 747", "12:00", "Monday");
   Aeroflot secondFlight("Los Angeles", "DL456", "Airbus A320", "14:30", "Wednesday");
   Aeroflot thirdFlight("London", "BA789", "Boeing 777", "10:15", "Friday");

   cout << "Flight 1: Flight Number - " << flight1.getFlightNumber() << ", Departure Time - " << flight1.getDepartureTime() << endl;
   cout << "Flight 2: Flight Number - " << flight2.getFlightNumber() << ", Departure Time - " << flight2.getDepartureTime() << endl;
   cout << "Flight 3: Flight Number - " << flight3.getFlightNumber() << ", Departure Time - " << flight3.getDepartureTime() << endl;


   Book firstBook("George Orwell", "1984", "Penguin Books", 1949, 328);
   Book secondBook("J.K. Rowling", "Harry Potter and the Sorcerer's Stone", "Scholastic", 1997, 309);

   cout << "Book 1: Title - " << book1.getTitle() << ", Author - " << book1.getAuthor() << endl;
   cout << "Book 2: Title - " << book2.getTitle() << ", Author - " << book2.getAuthor() << endl;



   Worker firstWorker("John D. Doe", "Engineer", 2015, 50000.0);
   Worker secondWorker("Jane A. Smith", "Manager", 2018, 60000.0);

   cout << "Worker 1: Full Name - " << worker1.getFullName() << ", Start Year - " << worker1.getStartYear() << endl;
   cout << "Worker 2: Full Name - " << worker2.getFullName() << ", Start Year - " << worker2.getStartYear() << endl;


   // OOP 4
    
}












