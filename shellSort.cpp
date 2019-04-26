#include <iostream>
using namespace std;

void ShellSort(int *arr,int length){
	int h = 1;
	//取第一个增量，用来将序列分组。所有距离为h的倍数的元素为一个组
	while(h<length){
		h = h*3 +1;	//必须确保最后h为1，即普通插入排序
	}

	while(h>0){
		for(int i = h;i<length;i++){
			int key = arr[i];
			int j = i - h;
			while(j>=0 && arr[j]>key){
				arr[j+h] = arr[j];
				j = j-h;
			}
			arr[j+h] = key;
		}
		h = h/3;
	}
	
}


int main(){
        int arr[8] = {1,2,5,8,3,6,4,7};

        ShellSort(arr,8);

        int size = sizeof(arr) / sizeof(arr[0]);

        for(int i = 0; i<size;i++)
        {
                cout<<arr[i]<<endl;
        }
        return 0;
}

