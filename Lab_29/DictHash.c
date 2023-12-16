////
//// ���������� ������� �� ����
//// 
//#define _CRT_SECURE_NO_WARNINGS
//#include <string.h>
//#include <stdlib.h>
//#include "Dict.h"
//
//
//
//#define MAX_HASH 13267
//
//struct Node {
//	char* word;
//	struct Node* next;
//};
//
//// ������ �������
//struct Node* first[MAX_HASH];
//
//
//// ���������� ���� ��� ������ word
//int hash(char* word) {
//	unsigned long hash_value = 0;
//	int i = 0;
//	while (word[i] != '\0') {
//		hash_value = 31 * hash_value + ((unsigned)(word[i]));
//		i++;
//	}
//	return hash_value % MAX_HASH;
//}
//
//
///* INSERT � ��������� ������� � ���������.
//��������� � �������� ������ ���������� ��������.
//��� ��������� ���������� �������� � ���������, ��������� �� ����������. */
//void Insert(char* word) {
//	struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
//
//	int hash_value = hash(word);
//
//	newNode->next = first[hash_value];
//	newNode->word = (char*)calloc(strlen(word) + 1, sizeof(char));
//	strcpy(newNode->word, word);
//	first[hash_value] = newNode;
//
//}
//
//
///* MEMBER � ��������, �������� �� ��������� ������� ������ ������� ��������� ��� ���. */
//int  Member(char* word) {
//	int hash_value = hash(word);
//
//	struct Node* ptr = first[hash_value];
//	while (ptr != NULL) {
//		if (strcmp(ptr->word, word) == 0) {
//			return 1;
//		}
//		ptr = ptr->next;
//	}
//	return 0;
//}
//
//
///* CREATE - ������� �������.
//���������� ����� ������� ������������� �������. */
//void Create() {
//	for (int i = 0; i < MAX_HASH; i++)
//		first[i] = NULL;
//}
//
//
///* DESTROY - ���������� �������.
//���������� ����� ��������� ������������� �������. */
//void Destroy() {
//	for (int i = 0; i < MAX_HASH; i++) {
//
//		while (first[i] != NULL) {
//			struct Node* delNode = first[i];
//			first[i] = first[i]->next;
//
//			free(delNode->word);
//			free(delNode);
//		}
//	}
//}