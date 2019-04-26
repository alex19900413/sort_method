#include <iostream>
using namespace std;

void insertSort(int *arr,int length){
	for(int i=1;i<length;i++){
		int key = arr[i];	//挖一个坑
		int j= i-1;
		while(j>=0 && arr[j]>key){
			arr[j+1] = arr[j];	//如果满足条件，挪坑
			j--;
		}
		arr[j+1] = key;		//把坑塡回去
	}
}

int main(){
	int arr[8] = {1,2,5,8,3,6,4,7};

	insertSort(arr,8);
	
	int size = sizeof(arr) / sizeof(arr[0]);

	for(int i = 0; i<size;i++)
	{
		cout<<arr[i]<<endl;
	}
	return 0;
}
