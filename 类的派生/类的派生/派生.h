#include"student.h"
;class student1: public student
{public:
student1(int a,int b,int c,int d):student(a,b,c)
{eg=d;}
void pj();
private:
	int eg;
}