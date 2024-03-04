//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() 
//{
//    vector<char> grades;
//
//    int choice;
//    int student_id;
//    char grade;
//
//    do {
//        cout << "\nMenu:" << endl;
//        cout << "1. Add Grades" << endl;
//        cout << "2. View Grades" << endl;
//        cout << "3. Exit" << endl;
//        cout << "Enter your choice: ";
//        cin >> choice;
//
//        switch (choice) {
//        case 1:
//            
//            cout << "Enter student ID: ";
//            cin >> student_id;
//
//            if (student_id >= grades.size()) {
//                grades.resize(student_id + 1);
//            }
//
//            cout << "Enter grade: ";
//            cin >> grade;
//
//            grades[student_id - 1] = grade;
//
//            cout << "Grade added successfully!" << endl;
//            break;
//
//        case 2:
//            if (grades.empty()) {
//                cout << "No grades available." << endl;
//            }
//            else {
//                for (int i = 0; i < grades.size(); i++) {
//                    cout << "Student ID: " << i + 1 << ", Grade: " << grades[i] << endl;
//                }
//            }
//            break;
//
//
//        case 3:
//            cout << "Exiting..." << endl;
//            break;
//
//        default:
//            cout << "Invalid choice." << endl;
//        }
//    } while (choice != 3);
//
//    return 0;
//}
