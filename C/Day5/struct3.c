#include <stdio.h>

struct profile {
	int age;
	double height;
	double weight;
};

struct student {
	struct profile pf;
	int id;
	double grade;
};

int main()
{
	struct student s;
	s.grade = 99;
	s.id = 201212;
	s.pf.age = 20;
	s.pf.height = 180;
	s.pf.weight = 60;

	printf("키 : %.1lf\n", s.pf.height);
	printf("몸무게 : %.1lf\n", s.pf.weight);
	return 0;
}