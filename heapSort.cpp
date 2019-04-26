#include <iostream>
#include <algorithm>

using namespace std;

void adjust(int *arr,int len,int index){
	int left = 2 * index + 1;
	int right = 2 * index +2;
	int maxIdx = index;
	if(left<len && arr[left] > arr[maxIdx] ) maxIdx = left;
	if(right<len && arr[right] > arr[maxIdx]) maxIdx = right;

	if(maxIdx !=index){
		swap(arr[index],arr[maxIdx]);
		adjust(arr,len,maxIdx);	//这里到底需不需要再调整呢？
	}
}

void HeapSort(int *arr,int size){
	//调整堆，使得当前序列根节点为最大值
	for(int i = size/2 -1;i>=0;i--)
	{
		adjust(arr,size,i);
	}

	//更新序列的大小
	for(int j =size-1;j>0;j-- )
	{
		swap(arr[0],arr[j]);
		//HeapSort(arr,j);
		adjust(arr,j,0);	//交换完之后，要把这个新的元素放到堆的合适的位置去
	}
}
	
int main()
{
    int array[8] = {8, 1, 14, 3, 21, 5, 7, 10};
    HeapSort(array, 8);
    for(auto it: array)
    {
        cout<<it<<endl;
    }
    return 0;
}




