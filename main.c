#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct student {
	int id; //학번 
	char name[100]; //이름 
	float score; //학점 
	
};

int main(int argc, char *argv[]) {
	
	//instance 선언, 초기화 
	struct student s1 = {2310131, "suan", 4.3 };
	
	//다른값 변경
	s1.id = 2210131;
	s1.name[0] = 'c';
	s1.score = 4.5;
	
	//출력 
	printf("student id:&i, name:%s, score:&f", s1.id, s1.name, s1.score);
	
	//이름통으로변경 
	//strcpy(s1.name, "swan");printf("name2 : %s\n");
	
	system("pause");
	return 0;
}
