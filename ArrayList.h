
#define LIST_SIZE 1000 //리스트의 크기 지정.


struct struct_list 
{
	int data[LIST_SIZE]; // LIST_SIZE 만큼 배열
	int now; 
	
};

typedef struct struct_list List;


void LInsert (List * juso, int data);

void ListInit (List * juso);

int LFirst(List * juso);

int LNext(List * juso);

int LRemove(List * juso);

int LCount(List * juso);
void Lchnow(List * juso, int nowdata);
