#include<iostream>
using namespace std;
class calculator{
	private:
		double a;
		double b;
		
	public:
		calculator(){a=b=1;}
		calculator(double i,double j);
		double addition();
		double substraction();
		double multiplication();
		double division();
		~calculator();
};
calculator::calculator(double i,double j)
{
	a=i;
	b=j;
}
double calculator::addition(){
	return a+b;
}
double calculator::substraction(){
	return a-b;
}
double calculator::multiplication(){
	return a*b;
}
double calculator::division(){
	return a/b;
}
calculator::~calculator(){
	
}
int main(){
   double i,j;
   char Operator;
   
	printf("enter an operator(+,-,*,/):");
	scanf("%c",&Operator);
	printf("enter two operands");
	scanf("%lf %lf",&i,&j);
	calculator c(i,j);
	switch (Operator){
	case'+': cout<<c.addition();
	        break;
	case'-':cout<<c.substraction();
	         break;
	case'*':cout<<c.multiplication();
	        break;
	case'/':cout<<c.division();
	        break;
}
}
