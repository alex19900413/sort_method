#include <iostream>

int main(){
	int ia[5];
	int ib[5] = {5,4,3,2,1};
	for(int i=0;i<5;i++){
		ia[i]=i;
	}
	std::cout<<"size:"<<sizeof(ia)<<std::endl;
	std::cout<<ia[2];
	std::cout<<ib[2];

//	system("pause"); used in windows
	return 1;
	
}
