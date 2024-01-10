#include<iostream>
using namespace std;
class Person{
	private:
		string id;
		string name;
		string dob;
	public:
		Person(){
			id   = "unknown";
			name = "unknown";
			dob  = "unknown";
		}
		Person(string Id,String Name,String DOB){
			Id = id;
			Name = name;
			DOB = dob;	
		}
		void Input(){
			cout<<"Input ID 			: ";cin>>id;
			cout<<"Input Name 			: ";cin>>name;
			cout<<"Input Date of Birth 	: ";cin>>dob;
		}
		void Output(){
			cout<<"\t"<<id<<"\t"<<name<<"\t"<<dob<<endl;
		}
		void Header(){
			cout<<"\tID\tName\tDate of Birth"<<endl;
		}
};
class Student : public Person{
	void Input(){
		Person ::Input();
	}
	void Output(){
		Person ::Output();
	}
};
int main(){
	Person obj;
	obj.Input();
	obj.Output();
}
