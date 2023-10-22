#include <iostream>
using namespace std;


struct sample1 {
    int data ;  // by default public 
};
class sample2{
    int data;   // by default private ;
    
    public:
    void assign_value(int input){
        data = input;
    }
    int output_value(){
        return data;
    }
};

int main() {
	sample1 test ; 
	test.data = 10; // accessebility to default public members of struct
	cout<<"sample 1 output "<<test.data<<endl;
	
	sample2 test2 ;
//	test2.data = 4;  // throws an error 
//	cout<<"sample 2 output is "<<test2.data;
	
	// we can access the data members of class through public member function.
	test2.assign_value(4);
	cout<<"output for sample 2"<<test2.output_value();
	
}
