#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	int id; //�й� 
	char name[100]; //�̸� 
	float score; //���� 
	
};

int main(int argc, char *argv[]) {
	
	//instance ����, �ʱ�ȭ 
	struct student s1 = {2310131, "suan", 4.3 };
	
	//�ٸ��� ����
	s1.id = 2210131;
	s1.name[0] = 'c';
	s1.score = 4.5;
	
	//��� 
	printf("student id:&i, name:%s, score:&f", s1.id, s1.name, s1.score);
	
	//�̸������κ��� 
	//strcpy(s1.name, "swan");printf("name2 : %s\n");
	
	system("pause");
	return 0;
}
