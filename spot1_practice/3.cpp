#include <iostream>
using namespace std;

class Patient{
private:
    int appointmentID;
    string patientName;
    int doctorCharge;
    int HospitalCharge;

public:
    void setPatientDetails(int aid, string pname);
    void displayPatientDetails();
    void setDoctorCharge(int dcharge);
    void setHospitalCharge(int hcharge);
    int calculateTotalPayment();
};

void Patient::setPatientDetails(int aid, string pname){
    appointmentID = aid;
    patientName = pname;
}

void Patient::setDoctorCharge(int dcharge){
    doctorCharge = dcharge;
}

void Patient::setHospitalCharge(int hcharge){
    HospitalCharge = hcharge;
}

int Patient::calculateTotalPayment(){
    return doctorCharge + HospitalCharge;
}

void Patient::displayPatientDetails(){
    cout<<"appointmentID = "<<appointmentID<< endl;
    cout<<"patientName = "<<patientName<<endl;
}


int main(void){

Patient p1, p2;

p1.setPatientDetails(1001,"Nimal");
p2.setPatientDetails(1002,"Sunil");

p1.setDoctorCharge(1500);
p2.setDoctorCharge(1700);

p1.setHospitalCharge(500);
p2.setHospitalCharge(500);

p1.displayPatientDetails();
cout<<"Total Payment = "<<p1.calculateTotalPayment();
cout<<endl<<endl;

p2.displayPatientDetails();
cout<<"Total Payment = "<<p2.calculateTotalPayment();
cout<<endl<<endl;

return 0;
}
