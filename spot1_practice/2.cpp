#include <iostream>
using namespace std;

class Event{
private:
    int eventID;
    string eventType;
    string eventColor;
    string location;

public:
    void setEventDetails(int eid, string etype, string ecolor);
    void displayEventDetails();
    void setEventLocation(string loct);
};

void Event::setEventDetails(int eid, string etype, string ecolor){
    eventID = eid;
    eventType = etype;
    eventColor = ecolor;
}

void Event::setEventLocation(string loct){
    location = loct;

    cout<<"Input New Location  "<< eventID << "= ";
    cin>>location;
}

void Event::displayEventDetails(){
    cout<<"eventid="<<eventID<<endl;
    cout<<"eventType="<<eventType<<endl;
    cout<<"eventColor="<<eventColor<<endl;
    cout<<"location="<<location<<endl;
}


int main(void){
//Event E1, E2, E3;
Event*E1=new Event();
Event*E2=new Event();
Event*E3=new Event();



E1->setEventDetails(1,"party","red");
E2->setEventDetails(2,"wedding","purple");
E3->setEventDetails(3,"party","pink");

E1->setEventLocation("Nugegoda");
E2->setEventLocation("Maharagama");
E3->setEventLocation("Malabe");

cout<<endl;
E1->displayEventDetails();
cout<<endl;
E2->displayEventDetails();
cout<<endl;
E3->displayEventDetails();


delete E1;
delete E2;
delete E3;

return 0;
}
