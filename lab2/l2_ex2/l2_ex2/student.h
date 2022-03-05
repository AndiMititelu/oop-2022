class Student
{
	char* name;
	float maths_grade;
	float english_grade;
	float history_grade;
public:
	void set_name(const char* name);
	void set_maths_grade(float grade);
	void set_english_grade(float grade);
	void set_history_grade(float grade);
	
	const char* get_name()const;
	float get_maths_grade()const;
	float get_english_grade()const;
	float get_history_grade()const;
	
	float average_grade();

	friend short int compare_name(Student s1, Student s2);
	friend short int compare_maths(Student s1, Student s2);
	friend short int compare_english(Student s1, Student s2);
	friend short int compare_history(Student s1, Student s2);
	friend short int compare_average(Student s1, Student s2);
};