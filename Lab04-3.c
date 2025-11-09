#include <stdio.h>
struct StructData{
	char a;
	int b;
	short c;
	char d;
};
union UnionData{
	char a;
	int b;
	short c;
	char d;	
};
int main()
{
	struct StructData value_A={'A',100,100,'a'};
	union UnionData value_B;
	value_B.b = 100;
	
	printf("size of type StructData is %d\n",sizeof(struct StructData));
	printf("size of type UnionData is %d\n",sizeof(union UnionData));

	printf("value_A's member is %c %d %hd %c\n",value_A.a,value_A.b,value_A.c,value_A.d);
	printf("value_B's member is %c %d %hd %c\n",value_B.a,value_B.b,value_B.c,value_B.d);
	
	return 0;
}

