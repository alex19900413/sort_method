#include <iostream>
using namespace std;
void swap(int& a,int& b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void ergodic(int *p,int length){
	for(int i=0;i<length;i++){
		cout<<p[i]<<endl;
	}
}

void BubbleSort(int *p,int length){
	for(int i=0;i<length;i++)
	{
		for(int j=0;j<length-i-1;j++)
		{
			if(p[j]>p[j+1])
				swap(p[j],p[j+1]);
		}
	}
}


int main(){
	int ia[10] = {2,5,3,7,1,3,4,8,10,9};
	BubbleSort(ia,10);
	ergodic(ia,10);
	return 0;
}
	
