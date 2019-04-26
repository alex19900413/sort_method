#include <iostream>
#include <array>
using namespace std;

int main(){
	array<float,4> score = {12,23,32,41};
	for(int i= 0;i<4;i++){
		cout<<score[i]<<endl;
	}

	return 0;
}
