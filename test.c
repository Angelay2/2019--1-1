#include <stdio.h>
#include <stdlib.h>

int main(){
	int i = 0;
	i--;

	int j = sizeof(i);
	if (i > j){
		printf(">");
	}
	else{
		printf("<");
	}
	printf("\n");

	system("pause");
	return 0;

}
//
//int checkData(int *p){
//	char tmp = 0;
//
//	int i;
//	for (i = 0; i < 5; i++){
//		tmp |= 1 << p[i];
//	}
//	return tmp == 0x3E;
//}
//
//
//int main(){
//	/*A ѡ��˵: B�ڶ�, �ҵ�һ;
//	Bѡ��˵: �ҵڶ�, E����;
//	Cѡ��˵: �ҵ�һ, D�ڶ�;
//	Dѡ��˵: C���, �ҵ���;
//	Eѡ��˵: �ҵ���, A��һ;*/
//	 ����ABCDE��λ�˵�����;
//	int p[5];
//	for (p[0] = 1; p[0] <= 5; p[0]++){
//		for (p[1] = 1; p[1] <= 5; p[1]++){
//			for (p[2] = 1; p[2] <= 5; p[2]++){
//				for (p[3] = 1; p[3] <= 5; p[3]++){
//					for (p[4] = 1; p[4] <= 5; p[4]++){
//						if ((p[1] == 2) + (p[0] == 3) == 1 &&
//							(p[1] == 2) + (p[4] == 4) == 1 &&
//							(p[2] == 1) + (p[3] == 2) == 1 &&
//							(p[2] == 5) + (p[3] == 3) == 1 &&
//							(p[4] == 4) + (p[0] == 1) == 1 &&
//							checkData(p)
//							){
//							for (int i = 0; i < 5; i++){
//								printf("%d ", p[i]);
//							}
//							putchar('\n');
//						}
//					}
//				}
//			}
//		}
//	}
//		system("pause");
//		return 0;
//}

//int main(){
//	int murder[4] = { 0 };
//		/*A˵�������ҡ�
//		B˵����C��
//		C˵����D��
//		D˵��C�ں�˵*/
//	int i;		
//	for (i = 0; i < 4; i++){
//		murder[i] = 1;
//		if ((murder[0] != 1) +
//			(murder[2] == 1) +
//			(murder[3] == 1) +
//			(murder[3] != 1) == 3){
//			break;
//		}
//		murder[i] = 0;
//	}
//
//		putchar('A' + i);
//		system("pause");
//		return 0;
//}