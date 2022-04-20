#include<iostream> 
	
    #pragma func2()
    #pragma func1()
void func1(); 
void func2(); 
	

	
void func1() 
{ 
	std::cout<<"Inside func1()\n"; 
} 
	
void func2() 
{ 
	std::cout<<"Inside func2()\n";	 
} 
	
int main() 
{ 
	std::cout<<"Inside main()\n"; 
		
	return 0; 
} 
