#include<iostream>
using namespace std;

void FastSort(int *arr,int l,int r)
{
if(l<r){		//逻辑判断
	int low = l;
	int high = r;
	int pivot = arr[low];	//选择一个值作为轴心值
	
	while(low<high){
		//从右边开始往左边找，找到第一个比轴心值小的元素
		while(low<high && arr[high]>pivot){
			high--;
		}
		if(low<high)	//这里一定要做判断，否则会出错
			arr[low++] = arr[high];

		//从左边开始往右边找，找到第一个比轴心值大的元素
		while(low<high && arr[low] < pivot){
			low++;
		}
		if(low<high)	//这里一定要做判读，否则会出错
			arr[high] = arr[low];

		arr[low] = pivot;
		//这样操作完之后，low左边的值都比其小，右边的值都比其大
		//然后分别对左右两个序列执行快排

		FastSort(arr,l,low-1);	//注意这里必须是l，而不是0
		FastSort(arr,low+1,r);
	}	
}
}

int main(){
        int arr[8] = {1,2,5,8,3,6,4,7};

        FastSort(arr,0,7);

        int size = sizeof(arr) / sizeof(arr[0]);

        for(int i = 0; i<size;i++)
        {
                cout<<arr[i]<<endl;
        }
        return 0;
}


