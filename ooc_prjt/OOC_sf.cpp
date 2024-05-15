// #include <iostream>
// #include <string>

// using namespace std;

// // Forward declarations
// class SystemAdministrator;
// class Employee;
// class Exam;
// class Quiz;

// // Base class (use inheritance)
// class User
// {
// private:
//     string name;
//     string email;
//     int phone;

// public:
//     User() {}                                                                                    // Default constructor
//     User(string uname, string uemail, int uphone) : name(uname), email(uemail), phone(uphone) {} // Overloaded constructor
//     void displayUserInfo()
//     {
//         cout << "Name: " << name << endl;
//         cout << "Email: " << email << endl;
//         cout << "Phone: " << phone << endl;
//     }
//     string getName() { return name; }
//     ~User() {} // Destructor
// };

// // Derived class SystemAdministrator
// class SystemAdministrator : public User
// {
// private:
//     string adminID;

// public:
//     SystemAdministrator() {} // Default constructor
//     SystemAdministrator(string uadminID, string uname, string uemail, int uphone)
//         : User(uname, uemail, uphone), adminID(uadminID) {}

//     void createExam(Exam *exam);
//     void createQuiz(Quiz *quiz);

//     void displayUserInfo()
//     {
//         cout << "System Administrator Info:" << endl;
//         User::displayUserInfo();
//         cout << "Admin ID: " << adminID << endl;
//     }
//     ~SystemAdministrator() {} // Destructor
// };

// // Derived class Employee
// class Employee : public User
// {
// private:
//     string employeeID;
//     Exam **exams;
//     Quiz **quizzes;
//     int examCount;
//     int quizCount;

// public:
//     Employee() : exams(nullptr), quizzes(nullptr), examCount(0), quizCount(0) {} // Default constructor
//     Employee(string uemployeeID, string uname, string uemail, int uphone)
//         : User(uname, uemail, uphone), employeeID(uemployeeID), exams(nullptr), quizzes(nullptr), examCount(0), quizCount(0) {}

//     void takeExam(Exam *exam);
//     void takeQuiz(Quiz *quiz);

//     void displayUserInfo()
//     {
//         cout << "Employee Info:" << endl;
//         User::displayUserInfo();
//         cout << "Employee ID: " << employeeID << endl;
//     }

//     ~Employee()
//     { // Destructor
//         delete[] exams;
//         delete[] quizzes;
//     }
// };

// // Class Exam
// class Exam
// {
// private:
//     string examID;
//     string examName;
//     Employee **participants;
//     int participantCount;

// public:
//     Exam() : participants(nullptr), participantCount(0) {} // Default constructor
//     Exam(string uexamID, string uexamName) : examID(uexamID), examName(uexamName), participants(nullptr), participantCount(0) {}

//     void addParticipant(Employee *employee)
//     {
//         Employee **newParticipants = new Employee *[participantCount + 1];
//         for (int i = 0; i < participantCount; ++i)
//         {
//             newParticipants[i] = participants[i];
//         }
//         newParticipants[participantCount] = employee;
//         delete[] participants;
//         participants = newParticipants;
//         participantCount++;
//     }

//     void displayExamInfo()
//     {
//         cout << "Exam ID: " << examID << endl;
//         cout << "Exam Name: " << examName << endl;
//         cout << "Participants: ";
//         for (int i = 0; i < participantCount; ++i)
//         {
//             cout << participants[i]->getName() << (i < participantCount - 1 ? ", " : "");
//         }
//         cout << endl;
//     }

//     ~Exam()
//     { // Destructor
//         delete[] participants;
//     }
// };

// // Class Quiz
// class Quiz
// {
// private:
//     string quizID;
//     string quizName;
//     Employee **participants;
//     int participantCount;

// public:
//     Quiz() : participants(nullptr), participantCount(0) {} // Default constructor
//     Quiz(string uquizID, string uquizName) : quizID(uquizID), quizName(uquizName), participants(nullptr), participantCount(0) {}

//     void addParticipant(Employee *employee)
//     {
//         Employee **newParticipants = new Employee *[participantCount + 1];
//         for (int i = 0; i < participantCount; ++i)
//         {
//             newParticipants[i] = participants[i];
//         }
//         newParticipants[participantCount] = employee;
//         delete[] participants;
//         participants = newParticipants;
//         participantCount++;
//     }

//     void displayQuizInfo()
//     {
//         cout << "Quiz ID: " << quizID << endl;
//         cout << "Quiz Name: " << quizName << endl;
//         cout << "Participants: ";
//         for (int i = 0; i < participantCount; ++i)
//         {
//             cout << participants[i]->getName() << (i < participantCount - 1 ? ", " : "");
//         }
//         cout << endl;
//     }

//     ~Quiz()
//     { // Destructor
//         delete[] participants;
//     }
// };

// // Implementation of SystemAdministrator methods
// void SystemAdministrator::createExam(Exam *exam)
// {
//     cout << "Exam created: " << endl;
//     exam->displayExamInfo();
// }

// void SystemAdministrator::createQuiz(Quiz *quiz)
// {
//     cout << "Quiz created: " << endl;
//     quiz->displayQuizInfo();
// }

// // Implementation of Employee methods
// void Employee::takeExam(Exam *exam)
// {
//     Exam **newExams = new Exam *[examCount + 1];
//     for (int i = 0; i < examCount; ++i)
//     {
//         newExams[i] = exams[i];
//     }
//     newExams[examCount] = exam;
//     delete[] exams;
//     exams = newExams;
//     exam->addParticipant(this);
//     examCount++;
//     cout << getName() << " is taking the exam: " << exam->examName << endl;
// }

// void Employee::takeQuiz(Quiz *quiz)
// {
//     Quiz **newQuizzes = new Quiz *[quizCount + 1];
//     for (int i = 0; i < quizCount; ++i)
//     {
//         newQuizzes[i] = quizzes[i];
//     }
//     newQuizzes[quizCount] = quiz;
//     delete[] quizzes;
//     quizzes = newQuizzes;
//     quiz->addParticipant(this);
//     quizCount++;
//     cout << getName() << " is taking the quiz: " << quiz->quizName << endl;
// }

// int main()
// {
//     // Create a system administrator
//     SystemAdministrator *admin = new SystemAdministrator("A001", "Alice", "alice@example.com", 123456789);

//     // Create employees
//     Employee *emp1 = new Employee("E001", "Bob", "bob@example.com", 987654321);
//     Employee *emp2 = new Employee("E002", "Charlie", "charlie@example.com", 564738291);

//     // Create exams and quizzes
//     Exam *exam1 = new Exam("EX001", "Math Exam");
//     Quiz *quiz1 = new Quiz("QZ001", "Science Quiz");

//     // Admin creates exams and quizzes
//     admin->createExam(exam1);
//     admin->createQuiz(quiz1);

//     // Employees take exams and quizzes
//     emp1->takeExam(exam1);
//     emp1->takeQuiz(quiz1);
//     emp2->takeExam(exam1);

//     // Display information
//     admin->displayUserInfo();
//     emp1->displayUserInfo();
//     emp2->displayUserInfo();
//     exam1->displayExamInfo();
//     quiz1->displayQuizInfo();

//     // Clean up (deallocate memory)
//     delete admin;
//     delete emp1;
//     delete emp2;
//     delete exam1;
//     delete quiz1;

//     return 0;
// }
