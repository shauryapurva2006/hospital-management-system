#include <iostream>
#include <string>
#include <vector>
using namespace std;

// -------------------- Person Class --------------------
class Person {
protected:
    string name;
    int age;
    string gender;

public:
    void inputPerson() {
        cout << "Enter Name: ";
        getline(cin >> ws, name); // ws clears whitespace
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Gender: ";
        cin >> gender;
    }

    void showPerson() const {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
    }

    string getName() const { return name; }
};

// -------------------- Patient Class --------------------
class Patient : public Person {
private:
    string disease;
    int patientID;

public:
    void inputPatient() {
        cout << "\n--- Enter Patient Details ---\n";
        inputPerson();
        cout << "Enter Disease: ";
        getline(cin >> ws, disease);
        cout << "Enter Patient ID: ";
        cin >> patientID;
    }

    void showPatient() const {
        cout << "\n--- Patient Details ---\n";
        showPerson();
        cout << "Disease: " << disease << endl;
        cout << "Patient ID: " << patientID << endl;
    }

    int getPatientID() const { return patientID; }
};

// -------------------- Doctor Class --------------------
class Doctor : public Person {
private:
    string specialization;
    int doctorID;

public:
    void inputDoctor() {
        cout << "\n--- Enter Doctor Details ---\n";
        inputPerson();
        cout << "Enter Specialization: ";
        getline(cin >> ws, specialization);
        cout << "Enter Doctor ID: ";
        cin >> doctorID;
    }

    void showDoctor() const {
        cout << "\n--- Doctor Details ---\n";
        showPerson();
        cout << "Specialization: " << specialization << endl;
        cout << "Doctor ID: " << doctorID << endl;
    }

    int getDoctorID() const { return doctorID; }
};

// -------------------- Appointment Class --------------------
class Appointment {
private:
    int patientID;
    int doctorID;
    string date;

public:
    void bookAppointment() {
        cout << "\n--- Book Appointment ---\n";
        cout << "Enter Patient ID: ";
        cin >> patientID;
        cout << "Enter Doctor ID: ";
        cin >> doctorID;
        cout << "Enter Date (DD/MM/YYYY): ";
        cin >> date;
    }

    void showAppointment() const {
        cout << "\n--- Appointment Details ---\n";
        cout << "Patient ID: " << patientID << endl;
        cout << "Doctor ID: " << doctorID << endl;
        cout << "Date: " << date << endl;
    }
};

// -------------------- Main Function --------------------
int main() {
    vector<Patient> patients;
    vector<Doctor> doctors;
    vector<Appointment> appointments;

    int choice;

    do {
        cout << "\n===== HOSPITAL MANAGEMENT SYSTEM =====\n";
        cout << "1. Add Patient\n";
        cout << "2. Show All Patients\n";
        cout << "3. Add Doctor\n";
        cout << "4. Show All Doctors\n";
        cout << "5. Book Appointment\n";
        cout << "6. Show All Appointments\n";
        cout << "0. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            Patient p;
            p.inputPatient();
            patients.push_back(p);
            break;
        }
        case 2:
            if (patients.empty()) cout << "No patients available.\n";
            else for (auto &p : patients) p.showPatient();
            break;
        case 3: {
            Doctor d;
            d.inputDoctor();
            doctors.push_back(d);
            break;
        }
        case 4:
            if (doctors.empty()) cout << "No doctors available.\n";
            else for (auto &d : doctors) d.showDoctor();
            break;
        case 5: {
            Appointment a;
            a.bookAppointment();
            appointments.push_back(a);
            break;
        }
        case 6:
            if (appointments.empty()) cout << "No appointments booked.\n";
            else for (auto &a : appointments) a.showAppointment();
            break;
        case 0:
            cout << "Exiting program...\n";
            break;
        default:
            cout << "Invalid choice! Try again.\n";
        }

    } while (choice != 0);

    return 0;
}