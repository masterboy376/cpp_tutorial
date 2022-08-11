#include <iostream>

using namespace std;

// student => test, sport => result 

class Student{
    protected:
        int rollNo;
    public:
        void setRollNo(int a){
            rollNo = a;
        }
        void printRollNo(void){
            cout<<"roll number is "<<rollNo<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float math, physics;
    public:
        void setMarks(float m1, float m2){
            math = m1;
            physics = m2;
        }
        void printMarks(void){
            cout<<"math score is "<<math<<" of stubent with roll no "<<rollNo<<endl;
            cout<<"physics score is "<<physics<<" of stubent with roll no "<<rollNo<<endl;
        }
};

class Sport : virtual public Student{
    protected:
        float score;
    public:
        void setScore(float s){
            score = s;
        }
        void printScore(void){
            cout<<"sport score is "<<score<<" of stubent with roll no "<<rollNo<<endl;
        }
};

class Result : public Test, public Sport{
    private:
        float total;
    public:
        void display(void){
            total = math + physics + score;
            printRollNo();
            printMarks();
            printScore();
            cout<<"The total is "<<total<<endl;
        }
};

int main()
{

    Result sam;
    sam.setRollNo(21);
    sam.setMarks(99.99, 99.98);
    sam.setScore(100);
    sam.display();
    return 0;

}