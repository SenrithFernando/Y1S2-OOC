#include <iostream>
#include <string>

using namespace std;


class Exam;

class Administrator
{
private:
    string administratorID;
    string name;

public:
    Administrator()
    {
        administratorID = "ADM001";
        name = "Senrith Fernando";
    }

    void overseeExam(Exam& exam);


    string getAdministratorID() const
    {
        return administratorID;
    }

    string getName() const
    {
        return name;
    }
};

class Exam
{
private:
    string examID;
    string name;
    int duration;
    int passMark;
    Administrator* administrator;

public:
    Exam() : examID(""), name(""), duration(0), passMark(0), administrator(nullptr) {}

    void createExam()
    {
        examID = "EX123";
        name = "Final Exam";
        duration = 120;
        passMark = 50;
        cout << "Exam created with ID: " << examID << ", Name: " << name << ", Duration: " << duration << " minutes, Pass Mark: " << passMark << endl;
    }

    void assignAdministrator(Administrator& administrator)
    {
        this->administrator = &administrator;
        cout << "Administrator assigned: " << administrator.getName() << endl;
    }

    void setPassMark(int passMark)
    {
        this->passMark = passMark;
        cout << "Pass mark set to: " << passMark << endl;
    }

    void setDuration(int duration)
    {
        this->duration = duration;
        cout << "Duration set to: " << duration << " minutes" << endl;
    }
};

void Administrator::overseeExam(Exam& exam)
{
    cout << "Administrator " << name << " (ID: " << administratorID << ") is overseeing the exam." << endl;
}

class Result
{
private:
    string employeeID;
    int score;
    string status;

public:
    void storeResult(int score, string status)
    {
        this->score = score;
        this->status = status;
        cout << "Result stored: Score = " << score << ", Status = " << status << endl;
    }

    int getScore() const
    {
        return score;
    }

    string getStatus() const
    {
        return status;
    }
};

class Report
{
private:
    int reportID;
    string content;

public:
    void generateReport(const Result& result)
    {
        reportID = 101;
        content = "Report generated for score: " + to_string(result.getScore()) + ", status: " + result.getStatus();
        cout << "Report generated: " << content << endl;
    }
};

class User
{
private:
    string username;
    string password;

public:
    void authenticateUser(string username, string password)
    {
        this->username = username;
        this->password = password;
        cout << "User authenticated: " << username << endl;
    }
};

class SystemSettings
{
private:
    int passMark;
    int duration;

public:
    void setPassMark(int passMark)
    {
        this->passMark = passMark;
        cout << "System-wide pass mark set to: " << passMark << endl;
    }

    void setDuration(int duration)
    {
        this->duration = duration;
        cout << "System-wide exam duration set to: " << duration << " minutes" << endl;
    }
};

class Inquiry
{
private:
    int inquiryID;
    string description;

public:
    void handleInquiry(string description)
    {
        inquiryID = 1;
        this->description = description;
        cout << "Inquiry handled: " << description << endl;
    }
};

class Log
{
private:
    int logID;
    string activity;

public:
    void logActivity(string activity)
    {
        logID = 1001;
        this->activity = activity;
        cout << "Activity logged: " << activity << endl;
    }
};

int main()
{

    Exam exam;
    Administrator administrator;
    Result result;
    Report report;
    User user;
    SystemSettings settings;
    Inquiry inquiry;
    Log log;


    exam.createExam();
    exam.assignAdministrator(administrator);
    administrator.overseeExam(exam);
    result.storeResult(85, "Pass");

    cout<<endl;
    report.generateReport(result);

    cout<<endl;
    user.authenticateUser("admin", "password");
    settings.setPassMark(70);
    settings.setDuration(120);

    cout<<endl;
    cout<<endl;
    inquiry.handleInquiry("How do I reset my password?");
    log.logActivity("Admin logged in");

    return 0;
}
