#include<iostream>
#include<string>
#include<ctime>
#include<windows.h>
using namespace std;
class A
{
public:
	A(int a1,int b1=0,int c1=0):a(a1),b(b1),num(c1),ak('!'),bk('*'){}
	A(char ao='!',char bo='*',int num1=0){ak=ao;bk=bo;num=num1;a=0;b=0;num=0;x=0;}
	A(A&B){this->a=B.a;this->ak=B.ak;this->b=B.b;this->bk=B.bk;this->num=B.num;x=B.x;}
	A& operator+(A q){a+=q.a;b+=q.b;num+=q.num;return *this;}
	A& operator*(A q){a*=q.a;b*=q.b;num*=q.num;return *this;}
	A& operator/(A q){try {if(q.a==0||q.b==0||q.num==0){throw "Êý¾ÝÒç³ö";}}catch(const char *p){cout<<*p;}a/=q.a;b/=q.a;num/=q.num;return *this;}
	friend A& operator-(A &p,A &q){p.a-=q.a;p.b-=q.b;p.num-=q.num;p.x-=q.x;return p;}
	friend ostream& operator<<(ostream &couts,A &q){couts<<q.a<<" "<<q.b<<" "<<q.num<<" "<<q.x<<endl;return couts;}
	friend istream& operator>>(istream &fins,A& q);
	virtual void pt(){cout<<*this;}
private:
	int a,b,num;
	char ak,bk;
	int x;
};
class Q:public A{
public:
	Q(int a1,int b1=0,int c1=0):A(a1,b1,c1){}
	Q(char ao='!',char bo='*',int num1=0):A(ao,bo,num1){}
	Q(Q& k){}
	void pt(){cout<<*this<<endl;}
};

template<typename fire>
class B{
private:int damage,length;
		int life;
		int killnum,dienum;
		fire user;
		static int enc;
		int oenc;
public:B(bool allow=0){damage=9;length=0;life=27;killnum=0;oenc=enc;enc++;dienum=0;if(1==allow){cin>>user;}}
	   B(fire gname){damage=50;length=0;life=100;killnum=0;oenc=enc;enc++;dienum=0;user=gname;}
	   static int showenc(){return enc;}
	   int showoenc(){return oenc;}
	   int showkillnum(){return killnum;}
	   void cdamage(){damage+=10;}
	   void clife(){life-=damage;}
	   void ckillnum(){killnum++;}
	   void cdienum(){dienum++;}
	   void cuser(){cin>>user;}
	   void cuser(fire a){user=a;}
	   void kill(B<fire> &people){people.clife();ckillnum();cout<<oenc<<" has killed "<<people.oenc<<" and he has lost "<<damage<<" lives."<<endl;people.judge(*this);people.cdienum();}
protected:void kill(int psw){int rps=980708;if(rps==psw){life=0;}}
		  void judge(B<fire> &people){if(life==0){cout<<"Game over!    ¡ª¡ª"<<oenc<<" has been killed by "<<people.showoenc()<<" ."<<'\n'<<"He has killed "<<people.showkillnum()<<" times ."<<endl;exit(1);}}
};
int B<string>::enc=0;
class possition {private:void bring(){cout<<"pass"<<endl;}public:void tringp(string psw_X){if(psw_X=="09285"){bring();}}};
int omain(){return 0;}

 istream& operator>>(istream& fin,A& start)
{
	//dfdfdfd
	fin>>start.a>>start.b>>start.num>>start.x;
	return fin;

}

template <typename t>
class C{private:t crazy;public:explicit C(t g){crazy=g;}C& operator +(C q){crazy+=q.crazy;return *this;}};
void main()
{
	
	A qp;
	A pq;
	cin>>qp>>pq;
	qp=qp-pq;
	cout<<qp<<endl;
	Q qq;
	A k;
	A* ks = &qq;
	ks->pt();
	
	B<string> people[20];
	Sleep(100);
	for(int i=0;i>-1;i++){
		srand((unsigned int)time(0));
		int ape=rand()%(B<string>::showenc());
		Sleep(400);
		int ape2=rand()%(B<string>::showenc());
		if(ape!=ape2){people[ape].kill(people[ape2]);}
		else
		{
			if(ape!=19){
				people[ape].kill(people[ape+1]);
			}
			else
			{
				people[ape].kill(people[0]);
			}
		}
		Sleep(600);
	}

	C<int> e(20);
	printf("%d",e+(C<int>)20);	
}