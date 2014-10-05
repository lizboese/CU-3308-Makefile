#ifndef STUDENT_H
#define STUDENT_H
class Student
{
	// instance variables
   private:
	 std::string firstName;
	 std::string lastName;
	 int age;
	// functions
   public:
	 Student();
	 Student(std::string, std::string, int);
	 std::string getFirstName();
	 std::string getLastName();
	 int getAge();
	 void setFirstName(std::string fn);
	 void setLastName(std::string ln);
	 void setAge(int _age);
};
#endif
