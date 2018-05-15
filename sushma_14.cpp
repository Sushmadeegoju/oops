#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<fstream>
using namespace std;

class input{
	char name[30];
	string grade;
	int roll,marks;
	public:
		void getdata(){
			cout << "Enter name: ";
			cin>>name;
			cout << "Enter roll no: ";
			cin >> roll;
			//cin.ignore(256, '\n');
			cout << "Enter marks: ";
			cin>>marks;
            compute_grade();
		}

		void compute_grade(){
            if(marks>=90)
                grade="a+";
            else if(marks>=80)
                grade="b+";
            else if(marks>=70)
                grade="b";
                else if(marks>=60)
                grade="c+";
                else if(marks>=50)
                grade="c";
                else if(marks>=40)
                grade="d";
                else if(marks<40)
                grade="f";
		}

		void writedata(){
			cout << "\nName: " << name << endl;
			cout << "Roll no: " << roll << endl;
			cout << "marks: " << marks << endl;
			cout<<"grade:"<<grade<<endl;
		}


		int check(int req){
			if(req == roll)
				return 1;
			return 0;
		}
};

int main(){
	ofstream f;
	f.open("sush.txt");
	input person1, person2;

	person1.getdata();
	f.write((char*) & person1, sizeof(person1));
	person2.getdata();
	f.write((char*) & person2, sizeof(person2));
	int req;
	cout << "Enter the required roll no: ";
	cin >> req;
	f.close();
	ifstream fin;
	fin.open("sush.txt");
	while(fin){
		input person;

		fin.read((char*) & person, sizeof(person));
		if(person.check(req))
			person.writedata();
	}
	return 0;
}
