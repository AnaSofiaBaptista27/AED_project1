#include "Lesson.h"
#include "DataManip.h"
#include "UC_Class.h"
#include "Student.h"
#include "Test.h"
#include "Menu.h"

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    /*
    DataManip data;
    data.read_classes_per_uc("../schedule/classes_per_uc.csv");
    data.read_classes("../schedule/classes.csv");
    data.read_students_classes("../schedule/students_classes.csv");
     */

    /*
    Test *test = new Test(data);
    test->test_read_student_classes();
    */


    /*
    Test *test = new Test(data);
    test->test1();
     */


    /*
    Test *test = new Test(data);
    test->test_read_classes();
    */


    /*
    Test *test = new Test(data);
    test->test_consultStudentSchedule();
    */



    /*
     Test *test = new Test(data);
    test->test_consultClassSchedule();
     */

    DataManip data;
    Menu menu(data);
    menu.run();
    return 0;
}

