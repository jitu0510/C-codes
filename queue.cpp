#include<bits/stdc++.h>
using namespace std;


//enqueue operation
void enqueue(int qarr[],int num,int &rear,int size){
	if(rear==size){
		cout<<"overflow"<<endl;
	}else{
		qarr[rear]=num;
		rear++;
		cout<<"enqueue successfull"<<endl;
	}
}

//dequeue operation
void dequeue(int qarr[],int &front,int rear){
	if(front==rear){
		cout<<"queue underflow"<<endl;
	}else{
		qarr[front]=0;
		front++;
		cout<<"front element successfully dequeued"<<endl;
	}
}

//main() starts here
int main(){
	int size;
	cout<<"enter the queue size: ";
	cin>>size;
	int qarr[size]={0},front=0,rear=0,num,option;
	while(true){
	
	cout<<"enter 1 to enqueue an 2 to dequeue and 0 to terminate:"<<endl;
	cin>>option;
	
	if(option==1){
		cout<<"enter a number to enqueue:";
		cin>>num;
		enqueue(qarr,num,rear,size);
	}
	else if(option==2){
		dequeue(qarr,front,rear);
	}
	else if(option==0){
		break;
	}
	else{
		cout<<"invalid choice"<<endl;
	}
  }
  for(int i=front;i<rear;i++){
  	cout<<qarr[i]<<" ";
  }
}  
