#include<iostream>
using namespace std;

class Student{
    private:
    int Roll;
    string name;
    int Maths;
    int Science;
    int kannada;

    public:
    Student(int r , string n , int m , int S , int k){
        Roll = r;
        name = n;
        Maths = m;
        Science = S;
        kannada = k;

    }
    int Total(){
        return Maths+Science+kannada;
    }
    char grade(){
        float average=Total()/2;
        if(average>60){
            return 'A';
        }
        else if(average>=40 && average<60){
            return 'B';
        }
        else{
            return 'C';
        }
    }

};
int main(){
       int Roll;
       string name;
       int m,S,k;
          cout<<"Enter Roll number of a Student: ";
          cin>>Roll;
           cout<<"Enter Name of a Student:";
            cin>>name;
             cout<<"Enter marks in 3 subjects";
             cin>>m>>S>>k;
                  Student s(Roll,name,m,S,k);
                cout<<"Total Marks:"<<s.Total()<<endl;
                    cout<<"Grade of Student:"<<s.grade()<<endl;
}
