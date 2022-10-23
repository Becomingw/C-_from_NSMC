class student
{
public:
student(int a,int b,int c)
{num=a;
ch=b;
mc=c;
}
void display();
void sum();
int hao()
{return num;};
int yu()
{return ch;};
int su()
{return mc;};
private:
	int num;
	int ch;
	int mc;
};
class student1: public student
{public:
student1(int a,int b,int c,int d):student(a,b,c)
{eg=d;}
void display1();
void pj();
void sum();
private:
	int eg;
}

