#include <iostream>
using namespace std;
class Student{
  private:
  	string name;
  	int roll_no;
  public:
  	/*void SetData(int roll,string name)
  	{
  		roll_no=roll;
  		name=name;
  	}
  	void GetData()
  	{
  		cout<<"My name is "<<name<<" "<<"and my roll no is "<<roll_no<<endl;
  	}*/
  	//  constructor 
  	Student()
  	{
  		name="No name";
  		roll_no=0;
  	}
  	Student(string name)
  	{
  		this->name=name;
  		roll_no=0;
  	}
  	Student(int roll)
  	{
  		name="No name";
  		roll_no=roll;
  	}
  	Student(int roll,string name)
  	{
  		roll_no=roll;
  		this->name=name;
  	}
  	Student(Student &s1)
  	{
  		name=s1.name;
  		roll_no=s1.roll_no;
  	}
  	void display()
  	{
  		cout<<"My name is "<<name<<" "<<"and my roll no is "<<roll_no<<endl;
  	}
};
int main()
{
      Student s1(1234,"Bhavani");
      Student s2("Durga");
      Student s3(123);
      Student s4;
      s1.display();
      s2.display();
      s3.display();
      s4.display();
      Student s5(s1);
      s5.display();
      // s1.SetData(123,"Bhavani");
      // s1.GetData();
}