#include <iostream>

using namespace std;
int main()
{
	int sub, marks;
	float tot=0, per;
	
	
	std::cout<<"Enter the number of subjects:";
	std::cin>>sub;
	
	for(int i=1;i<=sub;++i)
	{
	std::cout<<"Enter the mark of "<< subname<<"subject:";
	std::cin>> marks;
			tot+=marks;
				per=tot/sub;
	}
	
	std::cout<<"The total marks is "<<tot<<endl;
	
	std::cout<<"The Percentage of the total mark is "<<per;
	return 0;
}
