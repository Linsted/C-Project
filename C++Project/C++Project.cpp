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



    Abiturient abiturient1;
    abiturient1.setSurname("Sidorov");
    abiturient1.setFirstName("Sergii");
    abiturient1.setMiddleName("Sergiyovych");
    abiturient1.setAddress("123 Main St");
    abiturient1.setMarks(4, 3, 2, 4, 5);
    Abiturient abiturient2;
    abiturient2.setSurname("Kuznetsov");
    abiturient2.setFirstName("Igor");
    abiturient2.setMiddleName("Igorovych");
    abiturient2.setAddress("456 Elm St");
    abiturient2.setMarks(2, 1, 2, 3, 3);



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

    abiturient1.checkExclusion();
    abiturient2.checkExclusion();

   cout << "Flight 1: Flight Number - " << flight1.getFlightNumber() << ", Departure Time - " << flight1.getDepartureTime() << endl;
   cout << "Flight 2: Flight Number - " << flight2.getFlightNumber() << ", Departure Time - " << flight2.getDepartureTime() << endl;
   cout << "Flight 3: Flight Number - " << flight3.getFlightNumber() << ", Departure Time - " << flight3.getDepartureTime() << endl;

   cout << "Book 1: Title - " << book1.getTitle() << ", Author - " << book1.getAuthor() << endl;
   cout << "Book 2: Title - " << book2.getTitle() << ", Author - " << book2.getAuthor() << endl;


   cout << "Worker 1: Full Name - " << worker1.getFullName() << ", Start Year - " << worker1.getStartYear() << endl;
   cout << "Worker 2: Full Name - " << worker2.getFullName() << ", Start Year - " << worker2.getStartYear() << endl;



}


















// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
