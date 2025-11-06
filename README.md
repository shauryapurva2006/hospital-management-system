# *Hospital Management System*

A comprehensive console-based Hospital Management System developed in C++ that demonstrates Object-Oriented Programming principles through patient, doctor, and appointment management.


🏥 Overview
This Hospital Management System is a command-line application built using C++ that helps manage essential hospital operations. The system allows hospital staff to:

Register and manage patient records

Register and manage doctor information

Schedule and track appointments between patients and doctors

The application showcases fundamental OOP concepts including inheritance, encapsulation, and polymorphism, making it an excellent educational project for learning C++ programming.

✨ Features
Patient Management
✅ Add new patients with comprehensive details

✅ Store patient information: Name, Age, Gender, Disease, Patient ID

✅ View all registered patients

✅ Unique patient identification system

Doctor Management
✅ Register doctors with detailed profiles

✅ Store doctor information: Name, Age, Gender, Specialization, Doctor ID

✅ Display all available doctors

✅ Track doctor specializations

Appointment System
✅ Book appointments linking patients and doctors

✅ Schedule appointments with specific dates

✅ View all scheduled appointments

✅ Track appointment history

User Interface
✅ Interactive menu-driven console interface

✅ Easy navigation with numbered options

✅ Input validation and error handling

✅ Clean and organized output display

🛠️ Technologies Used
Programming Language: C++ (C++11 or higher)

Standard Libraries:

<iostream> - Input/output operations

<string> - String manipulation

<vector> - Dynamic array storage

Compiler: GCC/G++, Clang, MSVC, or any standard C++ compiler

📁 Project Structure
text
hospital-management-system/
│
├── main.cpp          # Main source code file
├── README.md         # Project documentation
└── LICENSE           # License information (optional)
Code Organization
text
main.cpp
├── Person Class (Base Class)
│   ├── Attributes: name, age, gender
│   └── Methods: inputPerson(), showPerson(), getName()
│
├── Patient Class (Inherits Person)
│   ├── Additional Attributes: disease, patientID
│   └── Methods: inputPatient(), showPatient(), getPatientID()
│
├── Doctor Class (Inherits Person)
│   ├── Additional Attributes: specialization, doctorID
│   └── Methods: inputDoctor(), showDoctor(), getDoctorID()
│
├── Appointment Class
│   ├── Attributes: patientID, doctorID, date
│   └── Methods: bookAppointment(), showAppointment()
│
└── Main Function
    └── Menu-driven interface with vector storage
🚀 Installation
Prerequisites
Ensure you have a C++ compiler installed on your system:

Linux/Mac: GCC/G++ (usually pre-installed)

Windows: MinGW, MSVC, or Cygwin

All Platforms: Visual Studio Code with C++ extension, Code::Blocks, or any C++ IDE

Steps
Clone the repository:

bash
git clone https://github.com/yourusername/hospital-management-system.git
cd hospital-management-system
Compile the program:

Using g++:

bash
g++ main.cpp -o hospital
Using clang++:

bash
clang++ main.cpp -o hospital
Run the executable:

On Linux/Mac:

bash
./hospital
On Windows:

bash
hospital.exe
📖 Usage
Main Menu
When you run the program, you'll see the following menu:

text
===== HOSPITAL MANAGEMENT SYSTEM =====
1. Add Patient
2. Show All Patients
3. Add Doctor
4. Show All Doctors
5. Book Appointment
6. Show All Appointments
0. Exit
Enter choice:
Operations
1. Add Patient
Select option 1

Enter patient details:

Name

Age

Gender

Disease

Patient ID (unique identifier)

2. Show All Patients
Select option 2

Displays all registered patients with their complete information

3. Add Doctor
Select option 3

Enter doctor details:

Name

Age

Gender

Specialization (e.g., Cardiology, Neurology)

Doctor ID (unique identifier)

4. Show All Doctors
Select option 4

Displays all registered doctors with their complete information

5. Book Appointment
Select option 5

Enter:

Patient ID (must match an existing patient)

Doctor ID (must match an existing doctor)

Date (format: DD/MM/YYYY)

6. Show All Appointments
Select option 6

Displays all scheduled appointments with patient ID, doctor ID, and date

0. Exit
Select option 0 to close the program

📚 Class Documentation
1. Person Class (Base Class)
Purpose: Stores common attributes for both patients and doctors.

Attributes:

string name - Full name

int age - Age in years

string gender - Gender

Methods:

void inputPerson() - Inputs person's basic details

void showPerson() const - Displays person's basic details

string getName() const - Returns the person's name

2. Patient Class (Derived from Person)
Purpose: Represents a patient in the hospital system.

Additional Attributes:

string disease - Medical condition/diagnosis

int patientID - Unique patient identifier

Methods:

void inputPatient() - Inputs patient-specific details

void showPatient() const - Displays complete patient information

int getPatientID() const - Returns patient ID

Inheritance: Uses public inheritance from Person class

3. Doctor Class (Derived from Person)
Purpose: Represents a doctor in the hospital system.

Additional Attributes:

string specialization - Medical specialty

int doctorID - Unique doctor identifier

Methods:

void inputDoctor() - Inputs doctor-specific details

void showDoctor() const - Displays complete doctor information

int getDoctorID() const - Returns doctor ID

Inheritance: Uses public inheritance from Person class

4. Appointment Class
Purpose: Manages appointments between patients and doctors.

Attributes:

int patientID - Links to patient

int doctorID - Links to doctor

string date - Appointment date

Methods:

void bookAppointment() - Books a new appointment

void showAppointment() const - Displays appointment details

💡 Example Workflow
Scenario: Booking a Complete Appointment
Add a Patient:

text
Choose option 1
Enter Name: John Doe
Enter Age: 35
Enter Gender: Male
Enter Disease: Migraine
Enter Patient ID: 101
Add a Doctor:

text
Choose option 3
Enter Name: Dr. Sarah Smith
Enter Age: 42
Enter Gender: Female
Enter Specialization: Neurology
Enter Doctor ID: 501
Book an Appointment:

text
Choose option 5
Enter Patient ID: 101
Enter Doctor ID: 501
Enter Date: 15/11/2025
View Appointments:

text
Choose option 6

Output:
--- Appointment Details ---
Patient ID: 101
Doctor ID: 501
Date: 15/11/2025
🎯 Key Programming Concepts Demonstrated
Object-Oriented Programming
Encapsulation: Data hiding using private/protected members

Inheritance: Patient and Doctor classes inherit from Person

Abstraction: Simplified interface for complex operations

Data Structures
Vectors: Dynamic storage for patients, doctors, and appointments

Iterators: Range-based for loops for traversal

Best Practices
Const correctness: Methods that don't modify data marked as const

Input handling: Using ws manipulator to clear whitespace

Menu-driven design: User-friendly interface pattern

🤝 Contributing
Contributions are welcome! Here's how you can help:

Fork the repository

Create a feature branch (git checkout -b feature/AmazingFeature)

Commit your changes (git commit -m 'Add some AmazingFeature')

Push to the branch (git push origin feature/AmazingFeature)

Open a Pull Request

Suggested Improvements
Add search functionality for patients/doctors

Implement file I/O for data persistence

Add appointment cancellation feature

Implement appointment conflict detection

Add medical history tracking

Create a graphical user interface (GUI)

📝 License
This project is licensed under the MIT License - see the LICENSE file for details.


