#include <iostream>
using namespace std;
class Employee {
	public:
		int code;string name;int age;string gender;int salary;long long number;
		Employee(){}
		Employee(int c, string N,int a, string g, int s, long long num){
			code = c;name = N;age = a;gender = g;salary = s;number = num;
		}
		void details(){
			cout<<endl<<code<<" "<<name<<" "<<age<<" ";
			cout<<gender<<" "<<salary<<" "<<number;
		}};
int main(){
	Employee employees[100];
	int per = 1;int k = 0;string Name;int age;string gen;int salary = 40000;long long num;
	while (per != 0){
		cout<<"enter first Name: ";
		cin>>Name;
		cout<<endl<<"enter age: ";
		cin>>age;
		cout<<endl<<"enter gender (M for male F for female): ";
		cin>>gen;
		cout<<endl<<"enter mobile number (10 digits): ";
		cin>>num;
		cout<<endl<<"enter 1 to register more emp or 0 to exit: ";
		cin>>per;
		cout<<endl<<k<<Name<<age<<gen<<salary<<num<<endl;
		employees[k] = Employee(k, Name, age, gen, salary, num);
		k++;
	}
	for (int i = 0; i<k; i++){
		employees[i].details();
	}
	return 0;
}


