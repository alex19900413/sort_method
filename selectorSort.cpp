#include <iostream>

using namespace std;
//从小到大，那么从左到右，选择最小的放在最左边序列。排好的序列就不用再管了。
//最后一个肯定是最大的
void SelectionSort(int arr[],int length){
	for(int i=0;i<length-1;i++){
		int min = i;	//先选择一个最小的值的下标
		//查找比这个值更小的下标
		for(int j=i+1;j<length;j++){
			if(arr[min]>arr[j]){
				min = j;
			}
		}

		if(i!=min){
			int temp =arr[i];
			arr[i] = arr[min];
			arr[min] = temp;
		}
	}
}

int main(){
        int arr[8] = {1,2,5,8,3,6,4,7};

        SelectionSort(arr,8);

        int size = sizeof(arr) / sizeof(arr[0]);

        for(int i = 0; i<size;i++)
        {
                cout<<arr[i]<<endl;
        }
        return 0;
}

