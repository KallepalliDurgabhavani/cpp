#include<iostream>
using namespace std;
class Humanbeing{
public:
    string name;
    int age;
    /*void introduce()
    {
    	cout<<"Hi Iam "<<name<<" "<<"and iam"<<age<<endl;
    }*/
    void introduce();
};
//           scope resolution

void Humanbeing:: introduce()
{
	cout<<"Hi Iam "<<name<<" "<<"and iam"<<age<<endl;
}
int main()
{
    Humanbeing bhavani;
    bhavani.name="bhavani";
    bhavani.age=19;
    bhavani.introduce();
          //               dynamic creation of object 
      Humanbeing *akash=new Humanbeing();
      akash->name="akash";
      akash->age=18;
      akash->introduce();
       Humanbeing *durga=&bhavani;
       (*durga).introduce();
}